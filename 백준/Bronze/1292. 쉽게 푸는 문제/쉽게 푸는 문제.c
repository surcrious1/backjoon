#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main() {
	int n, m;
	int sum = 0;
	int cnt = 0;
	scanf("%d %d", &n, &m);
	for (int i = 1;; i++) {
		for (int j = 0; j < i; j++) {
			cnt++;
			if (n <= cnt && m >= cnt) {
				sum += i;
			}
			else if (cnt > m) {
				printf("%d\n", sum);
				return 0;
			}
		}
	}
	return 0;
}