#include <stdio.h>
#include <math.h>
int main(void){
	int i;
	int money, juga[100]={0,}, decrease = 0, increase = 0;
	int jun = 0, sung = 0, junmoney, sungmoney;//보유 주식, 남은 현금
	scanf("%d", &money);
	junmoney = money;
	sungmoney = money;
	juga[0] = 0;
	for (i = 1; i <= 14; i++) {
		scanf("%d", &juga[i]);
		//jun
		if (junmoney / juga[i] > 0) {
			jun += junmoney / juga[i];
			junmoney -= juga[i] * (junmoney / juga[i]);
		}
		//sung
		if (juga[i - 1] < juga[i]) {//increase = 연속으로 오르면 다음은 감소 = 매도
			increase++;
			decrease = 0;
			if (increase == 3) {
				sungmoney += sung * juga[i];
				increase = 0;
			}
		}
		else {//decrease = 연속으로 떨어지면 다음은 증가 = 매수
			decrease++;
			increase = 0;
			if (decrease == 3) {
				sung += sungmoney / juga[i];
				sungmoney -= juga[i] * (sungmoney / juga[i]);
				decrease = 0;
			}
		}
	}
	junmoney += jun * juga[i - 1];
	sungmoney += sung * juga[i - 1];
	if (junmoney > sungmoney) printf("BNP");
	else if (junmoney < sungmoney) printf("TIMING");
	else printf("SAMESAME");
	return 0;
}