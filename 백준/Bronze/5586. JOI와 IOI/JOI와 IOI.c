#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int joi = 0, ioi = 0;
	char str[10001] = { 0, };//JOI IOI
	scanf("%s", str);
	for (int i = 0; i < strlen(str) - 2; i++) {
		if (str[i] == 'J' && str[i + 1] == 'O' && str[i + 2] == 'I') joi++;
		else if (str[i] == 'I' && str[i + 1] == 'O' && str[i + 2] == 'I') ioi++;
	}
	printf("%d\n%d", joi, ioi);
	return 0;
}