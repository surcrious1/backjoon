#include<stdio.h>
#include<string.h>


int main() {
	int m;
	int c;
	int q, d, n, p;
	scanf("%d", &m);
	for (int j = 0; j < m; j++) {
		q = 0;
		d = 0;
		n = 0;
		p = 0;
		scanf("%d", &c);
		for (int i = 0; c > 0; i++) {
			if (c >= 25) {
				q++;
				c -= 25;
			}
			else if (c >= 10) {
				d++;
				c -= 10;
			}
			else if (c >= 5) {
				n++;
				c -= 5;
			}
			else {
				p++;
				c -= 1;
			}
		}
		printf("%d %d %d %d\n", q, d, n, p);
	}
	return 0;
}