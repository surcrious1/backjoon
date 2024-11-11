#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main() {
	char a[31] = { 0, };
	char b[31] = { 0, };
	char arr[31][31] = { 0, };
	int i = 0, j = 0;
	int n, m,s=0;
	scanf("%s", a);
	scanf("%s", b);
	for (i = 0; i < strlen(a); i++) {
		for (j = 0; j < strlen(b); j++) {
			if (a[i] == b[j]) {
				n = i;//행b
				m = j;//열a
				s = 1;
				break;
			}
		}
		if (s == 1)break;
	}
	for (i = 0; i < strlen(a); i++) {
		arr[m][i] = a[i];
	}
	for (i = 0; i < strlen(b); i++) {
		arr[i][n] = b[i];
	}
	for (i = 0; i < strlen(b); i++) {
		for (j = 0; j < strlen(a); j++) {
			if ('A' <= arr[i][j] && arr[i][j] <= 'Z') printf("%c", arr[i][j]);
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}