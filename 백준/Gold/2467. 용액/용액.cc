#include<stdio.h>
#include<string.h>
#include<math.h>

long long arr[100000] = { 0, };
int main() {
	int n, lp, rp, left, right, sum, zero, ssum;	
	//zero는 0에 가까운 값을 저장
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);
	//초기값 할당
	lp = 0;
	rp = n - 1;
	zero = abs(arr[lp] + arr[rp]);
	left = arr[lp];
	right = arr[rp];
	while (lp != rp) {	//같아지면 종료
		sum = arr[lp] + arr[rp];
		ssum = abs(sum);
		if (sum == 0) {
			left = arr[lp];
			right = arr[rp];
			break;
		}
		else if (ssum <= zero) {	//0에서 가까운 것 찾기
			zero = ssum;
			left = arr[lp];
			right = arr[rp];
		}
		if (sum < 0) lp++;
		if (sum > 0) rp--;
	}
	printf("%d %d", left, right);
	return 0;
}