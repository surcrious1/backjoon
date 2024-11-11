#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main() {
	char n[20];
	int gap;
	scanf("%s", n);
	gap = n[0] - n[1];
	if (strlen(n) <= 2) {
		printf("◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!\n");
		return 0;
	}
	for (int i = 1; i < strlen(n) - 1; i++) {
		if (gap != n[i] - n[i + 1]) {
			printf("흥칫뿡!! <(￣ ﹌ ￣)>\n");
			return 0;
		}
	}
	printf("◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!\n");
	return 0;
}