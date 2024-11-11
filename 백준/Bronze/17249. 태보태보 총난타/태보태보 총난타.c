#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main() {
	char str[1000];
	int cnt_l = 0;
	int cnt_r = 0;
	int i = 0;
	scanf("%s", str);
	while (1) {
		if (str[i] == '@') cnt_l++;
		if (str[i] == '(') break;
		i++;
	}
	for (int j = 0; i < strlen(str);j++) {
		if (str[i] == '@') cnt_r++;
		i++;
	}
	printf("%d %d", cnt_l, cnt_r);
	return 0;
}