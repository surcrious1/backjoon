#include<stdio.h>
#include<string.h>

int main() {
	int p[101][101] = { 0, };
	int n;
	int w, h;
	int result = 0;
	int i,j,k;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d",&w ,&h);
		for (j = h; j < h + 10;j++) {
			for (k = w; k < w + 10; k++) {
				p[k][j]++;
			}
		}
	}
	for (j = 0; j < 100; j++) {
		for (i = 0; i < 100; i++) {
			if (p[j][i] > 0) result++;
		}
	}
	printf("%d", result);
	return 0;
}



