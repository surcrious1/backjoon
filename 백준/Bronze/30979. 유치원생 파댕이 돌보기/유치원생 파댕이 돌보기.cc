#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int t, n, arr[100] = { 0, };
	scanf("%d", &t);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		t -= arr[i];
	}
	if (t <= 0)printf("Padaeng_i Happy");
	else printf("Padaeng_i Cry");
	return 0;
}