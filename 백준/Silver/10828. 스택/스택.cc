#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	stack<int> s;
	int n, m;
	char str[10] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", str);
		if (strcmp(str, "push") == 0) {
			scanf("%d", &m);
			s.push(m);
		}
		else if (strcmp(str, "pop") == 0) {
			if (s.empty() == 1) printf("-1\n");
			else {
				printf("%d\n", s.top());
				s.pop();
			}
		}
		else if (strcmp(str, "size") == 0) printf("%d\n", s.size());
		else if (strcmp(str, "empty") == 0) printf("%d\n", s.empty());
		else {
			if (s.empty() == 0) printf("%d\n", s.top());
			else printf("-1\n");
		}
	}
	return 0;
}