#include<stdio.h>
#include<string.h>
int main(void) {
	char str[100001] = { 0, };
	int n, len, cnt2 = 0, cnte = 0;
	scanf("%d", &n);
	scanf("%s", str);
	len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] == '2')cnt2++;
		else cnte++;
	}
	if (cnt2 == cnte)printf("yee");
	else if (cnt2 > cnte)printf("2");
	else printf("e");
	return 0;
}