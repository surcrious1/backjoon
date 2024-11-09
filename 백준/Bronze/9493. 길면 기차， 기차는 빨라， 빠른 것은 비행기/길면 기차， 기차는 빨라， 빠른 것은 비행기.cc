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
	int m, a, b;
	int hour = 0, min = 0,sec;
	float time1, time2;
	scanf("%d %d %d", &m, &a, &b);
	while (m != 0 && a != 0 && b != 0) {
		//변수 초기화
		hour = 0;
		min = 0;
		// 단위 : km*3600/sec => 시간 : 속도 / 거리
		time1 = (float)m * 3600 / a;//기차의 시간 = km/sec
		time2 = (float)m * 3600 / b;//비행기의 시간 = km/sec
		if (time2 < time1)sec = round(time1 - time2);//차
		else sec = round(time2 - time1);
		while (sec >= 3600) {
			sec -= 3600;
			hour++;
		}
		while (sec >= 60) {
			sec -= 60;
			min++;
		}
		printf("%d:", hour);
		if(min < 10) printf("0%d:", min);
		else printf("%d:", min);
		if (sec < 10) printf("0%d\n", sec);
		else printf("%d\n", sec);
		scanf("%d %d %d", &m, &a, &b);
	}
	return 0;
}