#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int n, cnt[3] = { 0, }, max = 0, max_name[3] = { 0, };
	char str[101];
	scanf("%d", &n);
	scanf("%s", str);
	for (int i = 0; i < n; i++) {
		//Adrian
		if (str[i] == 'A' && i % 3 == 0) cnt[0]++;
		else if (str[i] == 'B' && i % 3 == 1) cnt[0]++;
		else if (str[i] == 'C' && i % 3 == 2) cnt[0]++;
		//Bruno
		if (str[i] == 'A' && i % 4 == 1) cnt[1]++;
		else if (str[i] == 'B' && (i % 4 == 0 || i % 4 == 2)) cnt[1]++;
		else if (str[i] == 'C' && i % 4 == 3) cnt[1]++;
		//Goran
		if (str[i] == 'A' && (i % 6 == 2 || i % 6 == 3)) cnt[2]++;
		else if (str[i] == 'B' && (i % 6 == 4 || i % 6 == 5)) cnt[2]++;
		else if (str[i] == 'C' && (i % 6 == 0 || i % 6 == 1)) cnt[2]++;
	}
	//max_cnt?
	for (int i = 0; i < 3; i++) {
		if (max <= cnt[i]) max = cnt[i];
	}
	//if max_cnt==max[?] print
	printf("%d\n", max);
	if (max == cnt[0]) printf("Adrian\n");
	if (max == cnt[1]) printf("Bruno\n");
	if (max == cnt[2]) printf("Goran\n");
	return 0;
}