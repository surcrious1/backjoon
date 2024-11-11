#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	int n, m;
	stack<int> s;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		if (m == 1) {
			scanf("%d", &m);
			s.push(m);
		}
		else if (m == 2) {
			if (s.empty() == 0) {
				printf("%d\n", s.top());
				s.pop();
			}
			else printf("-1\n");
		}
		else if (m == 3) printf("%d\n", s.size());
		else if (m == 4) printf("%d\n", s.empty());
		else {
			if (s.empty() == 0) printf("%d\n",s.top());
			else printf("-1\n");
		}
	}
	return 0;
}