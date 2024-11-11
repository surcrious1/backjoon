#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main() {
	char arr[100] = { 0, };
	char anw[100] = { 0, };
	int n;
	int key = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'S') {
				for (int k = 0; k < strlen(arr); k++) {
					anw[k] = arr[k];
				}
				key = 1;
				break;
			}
			if (key != 0) break;
		}
	}
	for (int i = 0; i < strlen(anw); i++) {
		printf("%c", anw[i]);
	}
	return 0;
}