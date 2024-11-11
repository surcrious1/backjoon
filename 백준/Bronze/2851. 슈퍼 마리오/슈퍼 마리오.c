#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int arr[10] = { 0, }, sum = 0, max = 0, check = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
		if (sum == 100) {
			printf("100");
			check = 1;
			break;
		}
		else if (sum > 100) {
			if (100 - max < sum - 100)printf("%d", max);
			else printf("%d", sum);
			check = 1;
			break;
		}
		else max = sum;//sum<100
	}
	if (check == 0)printf("%d", max);
	return 0;
}