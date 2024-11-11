#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int x, sum = 0, y = 64, cnt = 0;
	scanf("%d", &x);
	while (sum < x) {//if sum==x => break
		if (sum + y <= x) {
			sum += y;
			cnt++;
		}
		else y /= 2;
	}
	printf("%d", cnt);
	return 0;
}