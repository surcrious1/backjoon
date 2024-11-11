#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	char re[30] = { 0, }, code[30] = { 0, };
	int cnt = 0, n, check = 0;
	scanf("%s", re);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		check = 0;
		scanf("%s", code);
		for (int i = 0; i < 5; i++) {
			if (re[i] != code[i]) {
				check = 1;
				break;
			}
		}
		if (check == 0) cnt++;
	}
	printf("%d", cnt);
	return 0;
}