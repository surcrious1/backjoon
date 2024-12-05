#include<stdio.h>
int main(void) {
	int n, masic = 0;
	char sodduk[101];
	scanf("%d", &n);
	scanf("%s", sodduk);
	for (int i = 0; i < n / 2; i++) {
		if (sodduk[i] != sodduk[n - i - 1]) masic++;
	}
	printf("%d", masic);
}