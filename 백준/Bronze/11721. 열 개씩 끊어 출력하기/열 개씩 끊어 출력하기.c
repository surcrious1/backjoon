#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	char str[101] = { 0, };
	scanf("%s", str);
	for (int i = 1; i <= strlen(str); i++) {
		printf("%c", str[i - 1]);
		if (i % 10 == 0)printf("\n");
	}
	return 0;
}