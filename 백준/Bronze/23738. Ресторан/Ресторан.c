#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	char str[101];
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'B') printf("v");
		else if (str[i] == 'E') printf("ye");
		else if (str[i] == 'H') printf("n");
		else if (str[i] == 'P') printf("r");
		else if (str[i] == 'C') printf("s");
		else if (str[i] == 'Y') printf("u");
		else if (str[i] == 'X') printf("h");
		else printf("%c", str[i] - 'A' + 'a');
	}
	return 0;
}