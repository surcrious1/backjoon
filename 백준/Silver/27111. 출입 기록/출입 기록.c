#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int n;
	int list[200001] = { 0, };
	int a, b;
	int cnt = 0;
	int max = 0;
	scanf("%d", &n);
	//횟수 입력
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		//출입인원 조사
		if (a > max)max = a;
		if (b == 1) list[a]++;
		else if (b == 0) list[a]--;
		//현재 부대내의 사람A 카운트
		if (list[a] < 0) {
			list[a]++;
			cnt++;
		}
		else if (list[a] > 1) {
			list[a]--;
			cnt++;
		}
		//누락된 출입정보 카운트
	}
	for (int i = 1; i <= max; i++) {
		if (list[i] != 0) cnt++;
	}
	//최종적으로 부대내에 남은 사람/즉 누락된 나가는 데이터 카운트
	printf("%d", cnt);
	return 0;
}
