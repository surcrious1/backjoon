#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<stack>

using namespace std;

int main(void) {
	int tc, cnt , len;
	char str[100001] = { 0, };
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++) {
		stack<char>s;
		scanf("%s", str);
		len = strlen(str);
		cnt = 0;
		for (int j = 0; j < len; j++) {
			if (s.empty() == 1 && str[j] == '(') s.push(str[j]);//첫 input == '('
			else if (s.empty() == 0 && str[j] == ')' && s.top() == '(') s.pop();//if 
			else s.push(str[j]);//empty == 0 or top != str[j]
		}
		if (s.empty() == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}