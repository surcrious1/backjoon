#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	if (b < 10) d = a * 10 + b;
	else if (b < 100) d = a * 100 + b;
	else if (b < 1000) d = a * 1000 + b;
	else d = a * 10000 + b;
	printf("%d\n%d", a + b - c, d - c);
	return 0;
}