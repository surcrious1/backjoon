#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int before = -1000000, now, check = 0;
	while (scanf("%d", &now) != EOF) {
		if (before > now) {
			printf("Bad");
			return 0;
		}
		before = now;
	}
	printf("Good"); 
	return 0;
}