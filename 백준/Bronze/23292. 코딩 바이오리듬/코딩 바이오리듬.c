#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int biorythm(int date,int now) {
	int sum = 1, temp = 0;
	temp += (date % 10 - now % 10) * (date % 10 - now % 10);
	date /= 10;
	now /= 10;
	temp += (date % 10 - now % 10) * (date % 10 - now % 10);
	date /= 10;
	now /= 10;
	sum *= temp;
	temp = 0;
	temp += (date % 10 - now % 10) * (date % 10 - now % 10);
	date /= 10;
	now /= 10;
	temp += (date % 10 - now % 10) * (date % 10 - now % 10);
	date /= 10;
	now /= 10;
	sum *= temp;
	temp = 0;
	temp += (date % 10 - now % 10) * (date % 10 - now % 10);
	date /= 10;
	now /= 10;
	temp += (date % 10 - now % 10) * (date % 10 - now % 10);
	date /= 10;
	now /= 10;
	temp += (date % 10 - now % 10) * (date % 10 - now % 10);
	date /= 10;
	now /= 10;
	temp += (date % 10 - now % 10) * (date % 10 - now % 10);
	date /= 10;
	now /= 10;
	sum *= temp;
	return sum;
}

int main(void) {//9%
	int date, now, sum, max = 0, n, max_date = 99999999;
	scanf("%d", &date);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &now);
		sum = biorythm(date, now);
		if (max < sum) {
			max = sum;
			max_date = now;
		}
		else if (max == sum && max_date > now) {
			max = sum;
			max_date = now;
		}
	}
	printf("%d", max_date);
	return 0;
}