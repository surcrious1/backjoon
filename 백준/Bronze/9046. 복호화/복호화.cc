#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	int n, arr[26] = { 0, }, max, cnt, check;
	char str[256] = { 0, };
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		max = 0;
		cnt = 0;
		for (int j = 0; j < 26; j++) arr[j] = 0;
		cin.getline(str, 256);
		for (int j = 0;  '\0' != str[j]; j++) {
			if (str[j] != ' ') arr[str[j] - 'a']++;
			if (str[j] != ' ' && max < arr[str[j] - 'a']) max = arr[str[j] - 'a'];
		}
		for (int j = 0; j < 26; j++) {
			if (max == arr[j]) {
				cnt++;
				check = j;
			}
		}
		if (cnt == 1) printf("%c\n", check + 'a');
		else printf("?\n");
	}
	return 0;
}