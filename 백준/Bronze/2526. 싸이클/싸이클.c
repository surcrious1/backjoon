#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int n, p, cnt = 0, check = 0;
	int arr[1001] = { 0, }, c;
	scanf("%d %d", &n, &p);
	c = n;
	for (int i = 0; ; i++) {
		c = (c * n) % p;
		//printf("c %d\n", c);
		arr[c]++;
		if (arr[c] == 2) cnt++;//cnt start/첫 중복 지점 즉 loop
		else if (arr[c] == 3) {//cnt end
			printf("%d", cnt);
			return 0;
		}
	}
	return 0;
}