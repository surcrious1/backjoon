#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<stack>

using namespace std;

int main(void) {
	int a = 1, b = 1, c, n;
	scanf("%d", &n);
	if (n == 0) printf("0");
	else if (n == 1 || n == 2) printf("1");
	else {
		for (int i = 3; i <= n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		printf("%d", c);
	}
	return 0;
}