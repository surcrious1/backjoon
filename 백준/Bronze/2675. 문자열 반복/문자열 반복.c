#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int n;
	int k;
	char name[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &k, &name);
		for (int j = 0; j < strlen(name); j++)
		{
			for (int t = 0; t < k; t++) {
				printf("%c", name[j]);
			}
		}
		printf("\n");
	}
	return 0;
}