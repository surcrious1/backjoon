#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main(void) {
	int n;
	scanf("%d", &n);
	for (int j = 0; j < n; j++) {
		if(j==0 || j == n - 1) for (int i = 0; i < n; i++) printf("*");
		else {
			for (int i = 0; i < n; i++) {
				if (i == 0 || i == n - 1)printf("*");
				else if (i == j || i == n - j - 1)printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}