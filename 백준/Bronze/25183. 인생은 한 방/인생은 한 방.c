#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	char str[100001];
	int n, cnt = 1;
	scanf("%d", &n);
	scanf("%s", str);
	for (int i = 1; i < n; i++) {
		if (str[i] == str[i - 1] - 1 || str[i] == str[i - 1] + 1) cnt++;
		else cnt = 1;
		if (cnt == 5) break;
	}
	if (cnt == 5) printf("YES");
	else printf("NO");
	return 0;
}