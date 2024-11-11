#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	int n, m, num = 1, k = 0;
	char arr[1000001] = { 0, };
	stack<int> s;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		if (num <= m) {							//push 조건
			for (; num <= m; num++) {
				s.push(num);
				arr[k] = '+';
				k++;
			}
		}
		if (s.empty() == 0 && s.top() >= m) {	//pop하려면 empty!=1
			while (s.top() > m) {
				arr[k] = '-';
				k++;
				s.pop();
			}
			//s.top == m
			arr[k] = '-';
			k++;
			s.pop();
		}
		else if (num > m) {
			printf("NO");
			return 0;
		}
	}
	for (int i = 0; i < k; i++) printf("%c\n", arr[i]);
	return 0;
}