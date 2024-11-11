#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	int n, w, h, l; // w/l * h/l  
	int many;
	scanf("%d %d %d %d", &n, &w, &h, &l);
	many = (w / l) * (h / l);
	if (many <= n) printf("%d", many);
	else printf("%d", n);
	return 0;
}