#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int cnt[9] = { 0, }, max = 0;
	char n[7] = { 0, };
	scanf("%s", n);
	//cnt
	for (int i = 0; i < strlen(n); i++) {//max strlen = 7
		if (n[i] == '0')cnt[0]++;
		else if (n[i] == '1')cnt[1]++;
		else if (n[i] == '2')cnt[2]++;
		else if (n[i] == '3')cnt[3]++;
		else if (n[i] == '4')cnt[4]++;
		else if (n[i] == '5')cnt[5]++;
		else if (n[i] == '6' || n[i] == '9')cnt[6]++;
		else if (n[i] == '7')cnt[7]++;
		else if (n[i] == '8')cnt[8]++;
	}
	cnt[6] = cnt[6] / 2 + cnt[6] % 2;
	//max/cnt set
	for (int i = 0; i < 9; i++) {
		if (max < cnt[i])max = cnt[i];
	}
	printf("%d", max);
	return 0;
}