#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int m, f;
	scanf("%d %d", &m, &f);
	while (m != 0 || f != 0) {
		printf("%d\n", m + f);
		scanf("%d %d", &f, &m);
	}
	return 0;
}
