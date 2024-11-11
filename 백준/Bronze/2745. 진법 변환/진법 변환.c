#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	char str[100];
	int n;
	long long int sum = 0;
	int m;
	scanf("%s %d", str, &n);
	for (int i = strlen(str)-1; i >= 0; i--) {
		if ('A' <= str[i] && str[i] <= 'Z') {
			m = str[i] - 'A' + 10;
		}
		else {//number
			m = str[i] - '1' + 1;
		}
		sum += pow(n, strlen(str)-i-1) * m;
	}
	printf("%lld", sum);
	return 0;
}