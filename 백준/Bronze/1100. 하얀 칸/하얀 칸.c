#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main() {
	int cnt = 0;
	char chess[8][9] = { 0, };
	for (int i = 0; i < 8; i++) {
		scanf("%s", chess[i]);
		for (int j = 0; j < 8; j++) {
			if (chess[i][j] == 'F' && i % 2 == 0 && j % 2 == 0) cnt++;
			else if (chess[i][j] == 'F' && i % 2 == 1 && j % 2 == 1) cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}