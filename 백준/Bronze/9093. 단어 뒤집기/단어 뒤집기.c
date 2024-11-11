#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int main(void) {
	char str[1001] = { 0, };
	int t, i, j, point = 0;

	scanf("%d", &t);
	getchar();

	for (i = 0; i < t; i++) {
		fgets(str, sizeof(str), stdin);
		for (j = 0; j < strlen(str); j++) {
			if (str[j] == ' ' ) {
				for (int k = j - 1; k >= point; k--) printf("%c", str[k]);
				point = j + 1;
				printf(" ");
			}
			else if (str[j] == '\n') {
				for (int k = j - 1; k >= point; k--) printf("%c", str[k]);
			}
		}
		point = 0;
		printf("\n");
	}
	return 0;
}