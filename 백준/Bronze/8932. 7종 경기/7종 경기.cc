#include <stdio.h>
#include <math.h>
int main(void){
	int sum, n, score;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		sum = 0;
		//100m
		scanf("%d", &score);
		sum += 9.23076 * pow(26.7 - score, 1.835);
		//높이뛰기 f
		scanf("%d", &score);
		sum += 1.84523 * pow(score - 75, 1.348);
		//포환던지기 f
		scanf("%d", &score);
		sum += 56.0211 * pow(score - 1.5, 1.05);
		//200m
		scanf("%d", &score);
		sum += 4.99087 * pow(42.5 - score, 1.81);
		//멀리뛰기 f
		scanf("%d", &score);
		sum += 0.188807 * pow(score - 210, 1.41);
		///창던지기 f
		scanf("%d", &score);
		sum += 15.9803 * pow(score - 3.8, 1.04);
		//800m
		scanf("%d", &score);
		sum += 0.11193 * pow(254 - score, 1.88);
		printf("%d\n", sum);
	}
	return 0;
}