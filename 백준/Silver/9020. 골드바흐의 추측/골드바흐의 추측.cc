#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;
int arr[10001] = { 0, };
void toast(int n) {
	for (int i = 4; i <= n; i += 2) arr[i] = 1;	//2의 배수
	for (int i = 3; i * i <= n; i += 2){		//3,5,7...의 배수
		if (arr[i] == 1)continue;
		for (int j = i * i; j <= n; j += i)
		{
			arr[j] = 1;
		}
	}
}
void find(int n) {
	int min = 10000, gap, n1, n2;
	for (int i = 2; i <= n / 2; i++) {
		if (arr[i] == 0 && arr[n - i] == 0) {
			gap =  n - 2 * i;
			if (gap < min) {
				n1 = i;
				n2 = n - i;
			}
		}
	}
	printf("%d %d\n", n1, n2);
}
int main(void) {
	int n, m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		toast(m);
		find(m);
	}
	return 0;
}