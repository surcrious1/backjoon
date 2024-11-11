#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	n /= 2;
	if (n < m) printf("%d", n);
	else printf("%d", m);
	return 0;
}