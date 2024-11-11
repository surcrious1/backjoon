#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int s[8];
	for (int i = 0; i < 8; i++) {
		scanf("%d", &s[i]);
	}
	if(s[0]==1){
		for (int i = 0; i < 8; i++) {
			if (s[i] == i + 1) {
			}
			else {
				printf("mixed");
				return 0;
			}
		}
		printf("ascending");
	}
	else if (s[0] == 8) {
		for (int i = 0; i < 8; i++) {
			if (s[i] == 8 - i) {
			}
			else {
				printf("mixed");
				return 0;
			}
		}
		printf("descending");
	}
	else {
		printf("mixed");
	}
	return 0;
}
