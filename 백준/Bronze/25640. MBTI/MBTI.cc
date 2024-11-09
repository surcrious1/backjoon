#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	int cnt = 0, n, keep = 0;
	char key[5] = { 0, }, anw[5] = { 0, };
	scanf("%s", key);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		keep = 0;
		scanf("%s", anw);
		for (int j = 0; j < 4; j++) if (key[j] == anw[j]) keep++;
		if (keep == 4) cnt++;
	}
	printf("%d", cnt);
	return 0;
}