#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;
int arr[500001] = { 0, };
int cnt = 1;
int color[500001] = { 0, };
void toast(int n) {
	long long i, j;
	color[1] = 1;
	for (i = 2; i <= n; i += 2) {		//2의 배수
		if (i == 2) cnt = 2;
		arr[i] = 1;
		color[i] = 2;
	}
	for (i = 3; i <= n; i += 2){		//3,5,7...의 배수
		if (arr[i] == 0) {				//if소수
			cnt++;
			color[i] = cnt;
		}
		if (arr[i] == 1) continue;
		for (j = i * i; j <= n; j += i) {
			arr[j] = 1;
			if (color[j] == 0) color[j] = cnt;
		}
	}
}
int main(void) {
	int n;
	scanf("%d", &n);
	toast(n);
	printf("%d\n", cnt);
	for (int i = 1; i <= n; i++) printf("%d ", color[i]);
	return 0;
}