#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int compare(const void* a, const void* b)
{
	if (*(int*)a > *(int*)b)
		return 1;
	else if (*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}

int main(void) {
	int n, x, count, i, j;
	int arr[100001] = { 0, };
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &x);
	count = 0;
	qsort(arr, n, sizeof(int), compare);
	//for (i = 0; i < n; i++) {
		//printf("%d ", arr[i]);
	//}
	//printf("\n");
	i = 0;
	j = n - 1;
	while (i < j)
	{
		if (arr[i] + arr[j] == x)
		{
			count++;
			i++;
			j--;
		}
		else if (arr[i] + arr[j] > x) j--;
		else if (arr[i] + arr[j] < x) i++;
		//free(arr);
	}
	printf("%d\n", count);
	return 0;
}