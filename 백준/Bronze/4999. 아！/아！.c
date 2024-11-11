#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char str[1000];
	char key[1000];
	int cnt_m = 0;
	int cnt_d = 0;
	scanf("%s", str);//my
	scanf("%s", key);//doctor
	//cnt m
	for (int i = 0;; i++) {
		if (str[i] == 'a') cnt_m++;
		else break;
	}
	//cnt d
	for (int i = 0;; i++) {
		if (key[i] == 'a') cnt_d++;
		else break;
	}
	if (cnt_m >= cnt_d) printf("go\n");
	else if(cnt_m < cnt_d) printf("no\n");
}