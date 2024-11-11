#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	int x, y, w, h;
	int n1, n2, n3, n4;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	n1 = x;
	n2 = w - x;
	n3 = y;
	n4 = h - y;
	if (n1 <= n2 && n1 <= n3 && n1 <= n4)printf("%d", n1);
	else if (n2 <= n1 && n2 <= n3 && n2 <= n4)printf("%d", n2);
	else if (n3 <= n1 && n3 <= n2 && n3 <= n4)printf("%d", n3);
	else printf("%d", n4);
	return 0;
}