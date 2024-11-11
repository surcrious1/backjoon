#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int n, m, k, sum = 0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &m);
		if (m % 2 == 0) sum += m / 2;				//짝
		else if (m % 2 == 1) sum += (m / 2) + 1;	//홀
	}
	if (sum >= n)printf("YES");
	else printf("NO");//sum < n
	return 0;
}