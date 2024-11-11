#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int left = 0, right = 0, left_check, right_check, cnt = 0;
	int n, m, h, arr[501] = { 0, }, start = 0, end = 0, i = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &arr[i]);
	}
	left = arr[0];
	left_check = 0;
	right_check = 0;
	while (1) {
		//printf("i %d\n", i);
		//printf("left %d right %d\n", left, right);
		//printf("left check %d right check %d\n", left_check, right_check);
		//printf("cnt %d\n", cnt);
		//left
		if (left_check == 0 && left <= arr[i] && arr[i] >= arr[i + 1]) {
			left = arr[i];
			start = i;
			left_check = 1;
			//printf("left check point\n");
		}
		//right
		else if (left_check == 1 && right_check == 0 && right <= arr[i]) {
			right = arr[i];
			end = i;
			//printf("right %d\n", right);
		}
		if (left_check == 1 && right_check == 0 && left <= right) {
			right = arr[i];
			end = i;
			right_check = 1;
			//printf("right check point\n");
		}
		//cnt
		if (left_check == 1 && right_check == 1 || i == m) {
			if (left <= right) h = left;
			else h = right;
			//printf("//start %d end %d h %d\n", start, end, h);
			for (int j = start + 1; j < end; j++) {
				if(arr[j] <= h) cnt += h - arr[j];
			}
			//printf("cnt %d\n", cnt);
			//left <- right, right_check reset
			left = right;
			right_check = 0;
			i = end;
			start = end;
			right = 0;
			//printf("end -> i %d\n", i);
		}
		if (i == m) break;
		i++;
	}
	//printf("/left check %d right check %d\n", left_check, right_check);
	//남은 수 합계(right가 배열의 끝이면 합계가 안남..)
	//cnt
	if (left_check == 1 && right_check == 0) {
		if (left <= right) h = left;
		else h = right;
		//printf("//start %d end %d h %d\n", start, end, h);
		for (int j = start + 1; j < end; j++) {
			//printf("j %d\n", j);
			if(arr[j] <= h) cnt += h - arr[j];
			//printf("cnt %d\n", cnt);
		}
	}
	printf("%d", cnt);
	return 0;
}