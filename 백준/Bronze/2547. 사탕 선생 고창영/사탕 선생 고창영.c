#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main() {
	unsigned long long avg, t, n, c, lost;
	scanf("%lld", &t);
	for (int i = 0; i < t; i++) {
		avg = 0;
		lost = 0;
		scanf("%lld", &n);
		for (int j = 0; j < n; j++) {
			scanf("%lld", &c);
			lost += c;
			if (lost >= n) {
				avg = lost / n;
				lost = lost % n;
			}
		}
		if (lost == 0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}