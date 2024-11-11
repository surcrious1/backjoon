#include<stdio.h>
#include<string.h>

char s[1000000];
int cnt[26] = { 0, };
int input;
int max;
int max_num;
int res = 0;
int main() {
	scanf("%s", &s);
	for (int i = 0; i < strlen(s); i++) {
		if ('a' <= s[i] && s[i] <= 'z') {
			input = s[i] - 'a';
			cnt[input]++;
		}
		else if ('A' <= s[i] && s[i] <= 'Z') {
			input = s[i] - 'A';
			cnt[input]++;
		}
	}
	max = cnt[0];
	if (strlen > 1) {
		for (int i = 1; i < 26; i++) {
			if (max < cnt[i]) {
				max = cnt[i];
				max_num = i;
			}
			else continue;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == cnt[i]) {
			res++;
		}
		else continue;
	}
	if (res > 1) printf("?"); 
	else printf("%c", max_num + 'A');
	return 0;
}