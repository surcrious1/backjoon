#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int size_arr, size_basket, apple, arr[21] = { 0, };
	int i, j, k, left = 1, right, cnt = 0;
	scanf("%d %d", &size_arr, &size_basket);
	scanf("%d", &apple);
	left = 1;
	right = left + size_basket - 1;
	//printf("left %d right %d\n", left, right);
	for (i = 0; i < apple; i++) {
		scanf("%d", &arr[i]);
		//move
		if (left != 100 && right != 100) {
			if (arr[i] < left) {
				for (j = 0; ; j++) {
					left--;
					right--;
					cnt++;
					if (left == arr[i]) break;
				}
			}
			else if (right < arr[i]) {
				for (j = 0; ; j++) {
					right++;
					left++;
					cnt++;
					if (right == arr[i]) break;
				}
			}
		}
		//printf("left %d right %d cnt %d\n", left, right,cnt);
	}
	printf("%d", cnt);
	return 0;
}