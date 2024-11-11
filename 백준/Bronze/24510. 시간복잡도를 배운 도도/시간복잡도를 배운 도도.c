#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main() {
	int n;
	int cnt = 0;
	int max = 0;
	char str[10001] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cnt = 0;
		scanf("%s", str);
		for (int j = 0; j < strlen(str) - 1; j++) {
			if (str[j] == 'f' && str[j + 1] == 'o' && str[j + 2] == 'r') cnt++;
			if (str[j] == 'w' && str[j + 1] == 'h' && str[j + 2] == 'i' && str[j + 3] == 'l' && str[j + 4] == 'e') cnt++;
		}
		if (max < cnt) max = cnt;
	}
	printf("%d", max);
	return 0;
}