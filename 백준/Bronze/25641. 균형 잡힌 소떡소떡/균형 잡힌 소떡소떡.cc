#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<stack>

using namespace std;

int main(void) {
	int s = 0, t = 0, len = 0, n, k = 0, cnt = 0;	//t는 전체 개수
	char str[101] = { 0, }, anw[101] = { 0, };
	scanf("%d", &n);
	scanf("%s", str);
	len = strlen(str);
	for (int i = len - 1; i >= 0; i--) {
		if (str[i] == 's') s++;
		else t++;
		if (t == s) cnt = t + s;
	}
	k = cnt;
	for (int i = len - 1; i > len - 1 - cnt; i--) {
		anw[k - 1] = str[i];
		k--;
	}
	for (int i = 0; i < cnt; i++) printf("%c", anw[i]);
	return 0;
}

