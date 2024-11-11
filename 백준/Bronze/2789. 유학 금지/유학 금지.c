#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	char str[101] = { 0, }, anw[101] = { 0, }, j = 0;
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != 'C' && str[i] != 'A' && str[i] != 'M' && str[i] != 'B' && str[i] != 'R' && str[i] != 'I' && str[i] != 'D' && str[i] != 'G' && str[i] != 'E') {
			anw[j] = str[i];
			j++;
		}
	}
	printf("%s", anw);
}