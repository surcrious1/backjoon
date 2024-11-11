#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int sum = 0, num = 0, i = 0, j = 1, result = 0;
	char input[51] = { 0, };
	scanf("%s", input);
	for (i = strlen(input) - 1; i >= 0; i--) {
		if ('0' <= input[i] && input[i] <= '9') {
			num += (input[i] - '0') * j;
			j *= 10;
		}
		else if (input[i] == '+') {
			sum += num;
			j = 1;
			num = 0;
		}
		else if (input[i] == '-') {
			sum += num;
			if(sum>0) sum = sum * (-1);
			result += sum;
			j = 1;
			num = 0;
			sum = 0;
		}
	}
	sum += num;
	result += sum;
	printf("%d\n", result);
	return 0;
}