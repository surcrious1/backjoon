#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	char str[5] = { 0, };
	int a = 0, b = 0;
	int i, j;
	scanf("%s", str);
	if (strlen(str) == 2) {
		printf("%d", str[0] + str[1] - 2 * '0');
	}
	else if (strlen(str) == 3) {//0+1 2//0 1+2
		//if : str1 == '0'
		if (str[1] == '0') {
			a = (str[0] - '0') * 10 + str[1] - '0';
			b = str[2] - '0';
		}
		else {
			a = str[0] - '0';
			b = (str[1] - '0') * 10 + str[2] - '0';
		}
		printf("%d", a + b);

	}
	else {// strlen(str) == 4
		a = (str[0] - '0') * 10 + str[1] - '0';
		b = (str[2] - '0') * 10 + str[3] - '0';
		printf("%d", a + b);
	}
	return 0;
}