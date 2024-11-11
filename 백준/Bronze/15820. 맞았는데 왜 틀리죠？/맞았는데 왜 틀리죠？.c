#include <stdio.h>

int main(void) {
	int n, m, a, b, cnt1 = 0, cnt2 = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (a != b) cnt1++;
	}
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		if (a != b) cnt2++;
	}
	if (cnt1 > 0) printf("Wrong Answer");
	else if (cnt2 > 0) printf("Why Wrong!!!");
	else printf("Accepted");
	return 0;
}