#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main(void) {
	int n;
	scanf("%d", &n);
	for(int i = n; i > 0; ) {
		if (i >= 5) {
			printf("V");
			i -= 5;
		}
		else {
			printf("I");
			i--;
		}
	}
	return 0;
}