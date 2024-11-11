#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}