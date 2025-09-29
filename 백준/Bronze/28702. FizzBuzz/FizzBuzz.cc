#include <iostream>
#include<string>
using namespace std;

int main() {
	char n1[10], n2[10], n3[10];
	int fizz = 0, buzz = 0;
	int n = 0;
	cin >> n1;
	if ('0' <= n1[0] && n1[0] <= '9') n = stoi(n1) + 3;
	cin >> n2;
	if ('0' <= n2[0] && n2[0] <= '9') n = stoi(n2) + 2;
	cin >> n3;
	if ('0' <= n3[0] && n3[0] <= '9') n = stoi(n3) + 1;
	if (n % 3 == 0)fizz = 1;
	if (n % 5 == 0)buzz = 1;
	if (fizz == 1 && buzz == 1)cout << "FizzBuzz";
	else if (fizz == 1 && buzz == 0)cout << "Fizz";
	else if (fizz == 0 && buzz == 1)cout << "Buzz";
	else cout << n;
	return 0;
}