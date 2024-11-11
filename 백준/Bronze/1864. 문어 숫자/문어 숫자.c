#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int x(int i) {
	int result = 1;
	for (int j = 0; j < i; j++) {
		result *= 8;
	}
	return result;
}
int main(void) {
	char str[10] = { 0, };
	int sum = 0, len, num = 0;
	while (1) {
		sum = 0;//sum reset
		scanf("%s", str);
		len = strlen(str);
		if (str[0] == '#') break;
		for (int i = 0; i < len; i++) {
			if (str[i] == '-') num = 0;
			else if (str[i] == '\\') num = 1;
			else if (str[i] == '@') num = 3;
			else if (str[i] == '?') num = 4;
			else if (str[i] == '>') num = 5;
			else if (str[i] == '&') num = 6;
			else if (str[i] == '%') num = 7;
			else if (str[i] == '/') num = -1;
			else num = 2;//( 인식 안됨;
			sum += num * x(len - i - 1);
		}
		printf("%d\n", sum);
	}
	return 0;
}