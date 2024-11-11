#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int *arr, int n) {
	int temp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j + 1], &arr[j]);
			}
		}
	}
}
int main(void) {
	int n, sum = 0, check = 0;
	int arr[1000] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, n);
	for (int i = 0; i < n; i++) {
		check += arr[i];
		sum += check;
	}
	printf("%d", sum);
	return 0;
}