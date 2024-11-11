#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	char num[6] = { 0, };
	int check = 0, len;
	while (scanf("%s",num)&&num[0]!='0') {
		len = strlen(num);
		for (int i = 0; i < len / 2; i++) {
			if (num[i] != num[len - 1 - i]) {
				check = 1;
				break;
			}
		}
		if (check == 0) printf("yes\n");
		else printf("no\n");
		check = 0;
	}
	return 0;
}