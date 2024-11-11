#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	int l, a, b, c, d; 
	int n, m;
	scanf("%d %d %d %d %d", &l, &a, &b, &c,&d);
	if (a % c == 0)n = a / c;
	else n = a / c + 1;
	if (b % d == 0)m = b / d;
	else m = b / d + 1;
	if (n > m)l -= n;
	else l -= m;
	printf("%d", l);
	return 0;
}