#include<iostream>
#include<cstring>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	char arr[100001] = { 0, };
	int	len, check = 0;
	long long sum = 0;
	scanf("%s", arr);
	len = strlen(arr);
	sort(arr, arr + len);
	for (int i = 0; i < len; i++) {
		if (arr[i] == '0') check = 1;
		else sum += arr[i] - '0';
	}
	if (check == 0 || sum % 3 != 0) printf("-1");
	else for (int i = len - 1; i >= 0; i--) printf("%c", arr[i]);
	return 0;
}