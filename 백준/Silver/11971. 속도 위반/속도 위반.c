#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int limit[100] = { 0, }, n, m, a, b, start = 0, end = 0, max = 0;
	scanf("%d %d", &n, &m);
	//limit
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		end += a;
		//printf("start %d end %d\n", start, end);
		for (int j = start; j <= end; j++) {
			limit[j] = b;
		}
		start = end + 1;
	}
	//printf("\n");
	start = 0;
	end = 0;
	//speed
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		end += a;
		//printf("start %d end %d\n", start, end);
		for (int j = start; j <= end; j++) {
			if (limit[j] < b && max < b - limit[j])max = b - limit[j];
		}
		start = end + 1;
		//printf("max %d\n", max);
	}
	printf("%d", max);
	return 0;
}