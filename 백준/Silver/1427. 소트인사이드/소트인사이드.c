#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main() {
	int temp;
	char str[11] = { 0, };
	scanf("%s", str);
	for (int i = 0; i < strlen(str) - 1; i++) {
		for (int j = i + 1; j < strlen(str); j++) {
			if (str[i] < str[j]) {
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	printf("%s", str);
	return 0;
}