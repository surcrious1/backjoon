#include <iostream>
#include<string>
using namespace std;

int fact(int n, int end) {
	if (n != end) return n * fact(n - 1,end);
	else return 1;
}
int main() {
	int n, k, sum;
	cin >> n >> k;
	if (k > n - k) 
		sum = fact(n, k) / fact(n - k, 0);
	else sum = fact(n, n - k) / fact(k, 0);
	cout << sum;
	return 0;
}