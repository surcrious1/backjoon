#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int main(void) {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a > b && b > c || c > b && b > a) printf("%d", b);//a b c//c b a
	else if (a > c && c > b || b > c && c > a) printf("%d", c);//a c b//b c a
	else if (b > a && a > c || c > a && a > b) printf("%d", a);//b a c//c a b
	return 0;
}