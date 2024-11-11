#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int a, b;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) return 0;
		else {
			if (a <= b) printf("No\n");
			else if (a > b) printf("Yes\n");
		}
	}
}