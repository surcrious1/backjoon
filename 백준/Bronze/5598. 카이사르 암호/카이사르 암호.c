#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int main(void) {
	char str[1001];
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if ('D' <= str[i] && str[i] <= 'Z') str[i] = str[i] + 'A' - 'D';
		else if ('A' <= str[i] && str[i] <= 'C') str[i] = str[i] + 'X' - 'A';
	}
	printf("%s", str);
	return 0;
}