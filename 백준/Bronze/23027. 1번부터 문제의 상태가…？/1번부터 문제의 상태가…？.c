#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	char str[1001] = { 0, };
	int i, a = 0, b = 0, c = 0, len;
	scanf("%s", str);
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] == 'A') a = 1;
		if (str[i] == 'B') b = 1;
		if (str[i] == 'C')c = 1;
	}
	//A
	if (a == 1) {
		for (i = 0; i < len; i++) {
			if (str[i] == 'B' || str[i] == 'C' || str[i] == 'D' || str[i] == 'F') {
				printf("A");
			}
			else {
				printf("%c", str[i]);
			}
		}
	}
	//B
	else if (a == 0 && b == 1) {
		for (i = 0; i < len; i++) {
			if (str[i] == 'C' || str[i] == 'D' || str[i] == 'F') {
				printf("B");
			}
			else {
				printf("%c", str[i]);
			}
		}
	}
	//C
	else if (a == 0 && b == 0 && c == 1) {
		for (i = 0; i < len; i++) {
			if (str[i] == 'D' || str[i] == 'F') {
				printf("C");
			}
			else {
				printf("%c", str[i]);
			}
		}
	}
	else if (a == 0 && b == 0 && c == 0) {
		for (i = 0; i < len; i++) {
			printf("A");
		}
	}
	return 0;
}