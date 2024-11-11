#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

int main() {
	int n;
	int input;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		for (int j = 0; input >= 5; j++) {
			printf("++++ ");
			input = input - 5;
		}
		for (int j = 0; j < input; j++) printf("|");
		printf("\n");
	}
	return 0;
}