#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

int main() {
	int cnt[10] = { 0, };
	int input;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &input);
		cnt[input]++;
	}
	for (int i = 0; i < 10; i++) {
		if (cnt[i] % 2 != 0) printf("%d", i);
	}
	return 0;
}