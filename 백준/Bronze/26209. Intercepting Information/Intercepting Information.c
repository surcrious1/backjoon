#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int num[8], check = 0;
	scanf("%d %d %d %d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7]);
	for (int i = 0; i < 8; i++) {
		if (num[i] == 9) {
			check = 1;
		}
	}
	if (check == 1) printf("F");
	else printf("S");
	return 0;
}