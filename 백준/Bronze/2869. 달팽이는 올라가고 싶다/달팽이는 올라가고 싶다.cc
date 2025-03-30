#include<iostream>
#include<algorithm>
using namespace std;
int arr[1000001];
int main() {
	int a, b, v;
	int n;
	cin >> a >> b >> v;
	n = (v - a) / (a - b);
	if ((v - a) == n * (a - b))cout << n+1;
	else cout << n + 2;
}