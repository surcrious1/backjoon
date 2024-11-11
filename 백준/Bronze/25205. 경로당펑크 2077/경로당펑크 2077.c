#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	char str[31] = { 0, }, mo[] = "rsefaqtdwczxvg";
	int n, check = 0;
	scanf("%d", &n);
	scanf("%s", str);
	for (int i = 0; i < 14; i++) {
		if (str[n - 1] == mo[i]) {
			printf("1");
			check = 1;
			break;
		}
	}
	if (check == 0) printf("0");
		//ㄱrㄴsㄷeㄹf
		//ㅁaㅂqㅅtㅇd
		//ㅈwㅊcㅋzㅌx
		//ㅍvㅎg
	return 0;
}