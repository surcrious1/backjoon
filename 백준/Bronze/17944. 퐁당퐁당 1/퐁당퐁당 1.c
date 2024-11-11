#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int n, t, check = 1, cnt = 0;
	scanf("%d %d", &n, &t);
	for (int i = 0; i < t; i++) {
		if (cnt == 2 * n) check = 0;
		else if (cnt == 1) check = 1;
		if (check == 1) cnt++;
		else cnt--;//check == 0
	}
	printf("%d", cnt);
	return 0;
}