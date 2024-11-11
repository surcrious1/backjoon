#include<stdio.h>
#include<string.h>

int main(void) {
	char str1[1001] = { 0, }, str2[1001] = { 0, };
	int cnt1[26] = { 0, }, cnt2[26] = { 0, }, check = 0, num = 1;
	while (1) {
		for (int i = 0; i < 26; i++) cnt1[i] = 0;
		for (int i = 0; i < 26; i++) cnt2[i] = 0;
		check = 0;
		scanf("%s", str1);
		scanf("%s", str2);
		if (strcmp(str1, "END") == 0 && strcmp(str2, "END") == 0) break;
		for (int i = 0; i < strlen(str1); i++) cnt1[str1[i] - 'a']++;
		for (int i = 0; i < strlen(str2); i++) cnt2[str2[i] - 'a']++;
		for (int i = 0; i < 26; i++) if (cnt1[i] != cnt2[i]) check = 1;
		if (check == 0) printf("Case %d: same\n", num);
		else printf("Case %d: different\n", num);
		num++;
	}
	return 0;
}