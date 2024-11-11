#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; i--) {
		for (int j = i; j > 0; j--) printf("*");
		printf("\n");
	}
	return 0;
}