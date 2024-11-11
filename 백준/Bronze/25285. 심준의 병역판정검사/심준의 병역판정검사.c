#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	float tc, high, weight, bmi;
	scanf("%f", &tc);
	for (int i = 0; i < tc; i++) {
		scanf("%f %f", &high, &weight);
		if (high < 140.1) printf("6\n");
		else if (high < 146) printf("5\n");
		else if (high < 159 || high >= 204) printf("4\n");
		else if (high < 161) {
			bmi = weight * 10000 / (high * high);
			if (16.0 > bmi || bmi >= 35.0) printf("4\n");
			else printf("3\n");
		}
		else {//161 ~ 204
			bmi = weight * 10000 / (high * high);
			if (bmi < 16.0 || bmi >= 35.0) printf("4\n");
			else if (bmi < 18.5 || bmi >= 30.0) printf("3\n");
			else if (bmi < 20.0 || bmi >= 25.0) printf("2\n");
			else printf("1\n");
		}
	}
	return 0;
}