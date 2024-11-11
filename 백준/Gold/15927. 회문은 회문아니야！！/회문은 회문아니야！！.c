#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main() {
	char str[500001] = { 0, };
	int len;
	int num = 0;
	scanf("%s", str);
	len = strlen(str);

	for (int i = 0; i < len ; i++) {
		if (str[i] != str[len - i - 1]) {//팰린드롬이 아닌 경우
			printf("%d", len);
			return 0;
		}
		//else 팰린드롬인 경우
		if (str[0] != str[len - i - 1]) {
			num++;
		}//zzzzczzzz
	}
	if (num == 0) printf("-1");//모두 같은 경우
	else printf("%d", len - 1);//다른 경우
	return 0;
}