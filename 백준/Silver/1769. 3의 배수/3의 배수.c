#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//91% 실패 반례찾기
//1의 자리수 됨,0 시작 안됨,영어 대문자 사용함
char str[1000001];
int main() {
	int sum = 0;
	int cnt = 0;
	scanf("%s", str);
	while (1) {
		if (strlen(str) != 1) {
			//1의 자리수 예외
			cnt++;
			for (int i = 0; i < strlen(str); i++) {
				sum += str[i] - '0';
			}
		}
		else {
			sum = str[0] - '0';
		}
		if (sum < 10) {
			if (sum % 3 == 0) {//369
				printf("%d\nYES", cnt);
				return 0;
			}
			else {
				printf("%d\nNO", cnt);
				return 0;
			}
		}
		else {
			//sum>=10
			sprintf(str, "%d", sum);//int->char
			sum = 0;
		}
	}
}