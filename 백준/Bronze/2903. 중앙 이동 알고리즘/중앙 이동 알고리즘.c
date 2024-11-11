#include<stdio.h>
#include<string.h>

int f(int);
int main() {
	int n;
	int c = 0;
	scanf("%d", &n);
	c += f(n) * f(n);
	printf("%d\n",c);
	return 0;
}
int f(int n) {
	int mod = 1;
	int result = 3;
	for (int i = 0; i < n-1; i++) {
		mod *= 2;
		result += mod;
	}
	return result;
}