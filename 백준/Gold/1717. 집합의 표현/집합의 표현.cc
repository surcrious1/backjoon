#include<iostream>
int arr[1000001] = { 0, };
int find(int n) {
	if (n == arr[n]) {
		return n;
	}
	else {
		return arr[n]=find(arr[n]);
	}
}
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) arr[i] = i;
	for(int i = 1; i <= m; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a == 1) {
			if (find(b) == find(c)) printf("YES\n");
			else printf("NO\n");
			
		}
		else {//a == 0
			if (find(b) < find(c)) arr[find(c)] = arr[find(b)];
			else arr[find(b)] = arr[find(c)];
		}
	}
}