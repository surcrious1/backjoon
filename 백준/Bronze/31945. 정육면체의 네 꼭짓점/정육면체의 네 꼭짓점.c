#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int compare(const int* a, const int* b) {
	if (*a > *b) return 1;
	else return -1;
}
int main(void) {
	int arr[4] = { 0, }, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &arr[j]);
		}
		qsort(arr, 4, sizeof(int), compare);
		if (arr[0] == 0 && arr[1] == 1 && arr[2] == 2 && arr[3] == 3)printf("YES\n");
		else if (arr[0] == 0 && arr[1] == 1 && arr[2] == 4 && arr[3] == 5)printf("YES\n");
		else if (arr[0] == 0 && arr[1] == 2 && arr[2] == 4 && arr[3] == 6)printf("YES\n");
		else if (arr[0] == 1 && arr[1] == 3 && arr[2] == 5 && arr[3] == 7)printf("YES\n");
		else if (arr[0] == 2 && arr[1] == 3 && arr[2] == 6 && arr[3] == 7)printf("YES\n");
		else if (arr[0] == 4 && arr[1] == 5 && arr[2] == 6 && arr[3] == 7)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}