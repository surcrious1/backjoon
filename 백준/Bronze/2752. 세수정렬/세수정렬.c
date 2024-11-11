#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <stdlib.h>
int cmp(int* a, int* b) { return (*a - *b); }
int main(void) {
	int arr[3] = { 0, };
	for (int i = 0; i < 3; i++) scanf("%d ", &arr[i]);
	qsort(arr, 3, sizeof(int), cmp);
	for (int i = 0; i < 3; i++) printf("%d ", arr[i]);
	return 0;
}