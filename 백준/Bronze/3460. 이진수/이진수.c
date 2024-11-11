#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int tc, num, arr[1000];
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++) {
		scanf("%d", &num);
		//이진수 변환
		for (int i = 0; num > 0; i++) {
			arr[i] = num % 2;
			num /= 2;
			if (arr[i] == 1) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}