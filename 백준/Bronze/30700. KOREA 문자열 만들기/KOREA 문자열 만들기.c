#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int word = 0, cnt = 0;
	char str[1001] = { 0, };
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (cnt == 0 && str[i] == 'K') cnt = 1;
		else if (cnt == 1 && str[i] == 'O') cnt = 2;
		else if (cnt == 2 && str[i] == 'R') cnt = 3;
		else if (cnt == 3 && str[i] == 'E') cnt = 4;
		else if (cnt == 4 && str[i] == 'A') {
			cnt = 0;
			word++;
		}
	}
	printf("%d", word * 5 + cnt);
	return 0;
}