#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int main(void) {
	char str[4];
	scanf("%s", str);
	for (int i = 2; i >= 0; i--) {
		printf("%c", str[i]);
	}
	return 0;
}