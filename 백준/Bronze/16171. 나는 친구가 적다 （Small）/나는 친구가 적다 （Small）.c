#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	char str[101] = { 0, }, key[101] = { 0, }, arr[101] = { 0, }, result;
	int i, j = 0;
	scanf("%s", str);
	scanf("%s", key);
	for (i = 0; i < strlen(str); i++) {
		if ('0' > str[i] || str[i] > '9') {
			arr[j] = str[i];
			j++;
		}
	}
	result = strstr(arr, key);
	if (result != NULL) printf("1");
	else printf("0");
	return 0;
}