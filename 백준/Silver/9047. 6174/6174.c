#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int n;
	int key,temp;
	int up[4];
	int down[4], A;
	int num[4], B;
	int cnt = 1;

	scanf("%d", &n);
	for (int k = 0; k < n; k++) {
		cnt = 1;
		scanf("%d", &key);
		while (1) {
			if (key == 6174) {
				printf("0\n");
				break;
			}
			for (int i = 0; i < 4; i++) {
				num[i] = key % 10;
				key /= 10;
				up[i] = num[i];
				down[i] = num[i];
			}
			//정렬
			for (int i = 0; i < 3; i++) {
				for (int j = i + 1; j < 4; j++) {
					//up 오름차순
					if (up[i] > up[j]) {
						temp = up[i];
						up[i] = up[j];
						up[j] = temp;
					}
					//down 내림차순
					if (down[i] < down[j]) {
						temp = down[i];
						down[i] = down[j];
						down[j] = temp;
					}
				}
			}
			A = down[0] * 1000 + down[1] * 100 + down[2] * 10 + down[3];
			B = up[0] * 1000 + up[1] * 100 + up[2] * 10 + up[3];
			key = A - B;
			//6174 check
			if (key == 6174) {
				printf("%d\n", cnt);
				break;
			}
			cnt++;
		}
	}
	return 0;
}