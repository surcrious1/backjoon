#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>



int main(void) {
	int up[500001] = { 0, }, down[500001] = { 0, };
	int n, h, sum;
	int min = 999999, minh = 0, c;
	scanf("%d %d", &n, &h);
	//input
	for (int i = 1; i <= n; i++) {
		scanf("%d", &c);
		if (i % 2 == 1) down[c]++;
		else up[c]++;
	}
	for (int i = h - 2; i > 0; i--) {
		down[i] += down[i + 1];
		up[i] += up[i + 1];
	}
	//cnt min
	for (int i = 1; i <= h; i++) {
		sum = down[i] + up[h - i + 1];
		if (min > sum) {
			min = sum;
			minh = 1;
		}
		else if(min == sum) minh++;
	}
	printf("%d %d", min, minh);
	return 0;
}