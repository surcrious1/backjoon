#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int a, b, c, temp;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 || b == 0 || c == 0) break;
		if (a < b && c < b) {//b
			temp = b;
			b = a;
			a = temp;
		}
		else if (a < c && b < c) {//c
			temp = c;
			c = a;
			a = temp;
		}
		//printf("%d %d %d\n", a, b, c);
		if (a*a==b*b+c*c) printf("right\n");
		else printf("wrong\n");
	}
	return 0;
}