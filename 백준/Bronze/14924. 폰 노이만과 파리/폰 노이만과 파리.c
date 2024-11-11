#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int s, t, d, f;
	scanf("%d %d %d", &s, &t, &d);
	s *= 2;
	f = t * d / s;
	printf("%d", f);
	return 0;
}