#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int arr[6], sum = 0;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("%d", 5 * sum);
	return 0;
}