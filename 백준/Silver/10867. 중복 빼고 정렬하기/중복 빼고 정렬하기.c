#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int n, arr[100001] = { 0, }, m, check = 0, k = 0, temp;
	scanf("%d", &n);
	//중복되지 않은 수만 배열에 담기
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		for (int j = 0; j < k; j++) {
			if (m == arr[j]) {
				check = 1;
			}
		}
		if (check == 0) {
			arr[k] = m;
			k++;
		}
		check = 0;
	}
	//오름차순 정렬
	for (int i = 0; i < k; i++) {
		for (int j = i; j < k; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	//print
	for (int i = 0; i < k; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}