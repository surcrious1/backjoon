#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<stack>

using namespace std;

int main(void) {
	int tc, cnt = 0, len;
	char str[100001] = { 0, };
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++) {
		stack<char>s;
		scanf("%s", str);
		len = strlen(str);
		for (int j = 0; j < len; j++) {
			if (s.empty() == 0 && s.top() == str[j]) s.pop();
			else s.push(str[j]);//empty == 1 or top != str[j]
		}
		if (s.empty() == 1) cnt++;
	}
	printf("%d", cnt);
	return 0;
}