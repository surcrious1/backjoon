#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char name[11], max_name[11];
	int t, cnt = 0, max_cnt = 0;
	int i = 0, j = 0;

	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%s %d", name, &cnt);
		if (cnt > max_cnt) {
			strcpy(max_name, name);
			max_cnt = cnt;
		}
		else if (cnt == max_cnt && strcmp(name, max_name) < 0) {
			strcpy(max_name, name);
			max_cnt = cnt;
		}
	}
	printf("%s\n", max_name);
	return 0;
}