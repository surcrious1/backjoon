#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	char a;
	scanf("%c", &a);
	if (a == 'N' || a == 'n') printf("Naver D2");
	else printf("Naver Whale");
	return 0;
}