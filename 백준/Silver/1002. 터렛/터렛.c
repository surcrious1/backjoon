#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main() {
	float x1, y1, r1, x2, y2, r2;
	double len, r, R;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%f %f %f %f %f %f", &x1, &y1, &r1, &x2, &y2, &r2);
		len = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));//원사이 거리
		r = sqrt(pow(r1 - r2, 2));//가장 짧은 반지름 거리
		R = sqrt(pow(r1 + r2, 2));//가장 먼 반지름 거리
		if (r1 == r2 && len == 0) printf("-1\n");
		else if (len == r || R == len) printf("1\n");
		else if (r < len && len < R) printf("2\n");
		else printf("0\n");
	}
	return 0;
}