#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	int n, a = 0, sum = 0, len;
	char str[10] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", str);
		len = strlen(str);
		sum = 0;
		if (strcmp(str, "P=NP") == 0) printf("skipped\n");
		else {
			for (int j = 0; j < len; j++) {
				a = 0;
				while (str[j] != '+' && str[j] != '\0') {
					a *= 10;
					a += str[j] - '0';
					j++;
				}
				sum += a;
				a = 0;
			}
			printf("%d\n", sum);
		}
	}
	return 0;
}