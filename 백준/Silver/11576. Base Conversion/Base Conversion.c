#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//pow
int jegob(int a,int j) {
	int result = 1;
	for (int i = 0; i < j; i++) {
		result *= a;
	}
	return result;
}
int main(void) {
	int a, b, n, arr[26], sum = 0, k;
	//진법 input
	scanf("%d %d", &a, &b);
	//숫자 갯수 input
	scanf("%d", &n);
	//arr input
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	//진법 변환
	k = 0;
	//10진법으로 바꾸기
	for (int j = n - 1; j >= 0; j--) {
		sum += arr[k] * jegob(a, j);
		k++;
	}
	k = 0;
	//미래 진법으로 바꾸기
	for (int j = 0; ;j++) {
		k++;
		arr[j] = sum % b;
		//printf("j %d arr[j] %d\n", j, arr[j]);
		sum /= b;
		arr[j + 1] = sum;
		//printf("j+1 %d arr[j+1] %d\n", j + 1, arr[j + 1]);
		if (sum < b)break;
	}
	//output
	for (int i = k; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
	return 0;
}