#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int n, cnt = 0;
	char str[100];
	scanf("%d", &n);
	scanf("%s", str);
	for (int i = 0; i < n; i++) {
		if (str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o') cnt++;
	}
	printf("%d", cnt);
	return 0;
}