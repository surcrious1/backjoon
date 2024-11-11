#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int hour, min, time = 0;
	scanf("%d %d", &hour, &min);
	time = 60 * (hour - 9) + min;
	printf("%d", time);
	return 0;
}