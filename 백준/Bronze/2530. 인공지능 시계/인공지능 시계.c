#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int hour, min, sec, time, check;
	scanf("%d %d %d", &hour, &min, &sec);
	scanf("%d", &time);
	//time cnt
	for (int i = 0;; i++) {
		check = 0;
		if (time >= 3600) {
			hour += time / 3600;
			time -= (time / 3600) * 3600;
		}
		if (hour > 23) {
			hour = hour % 24;
			check++;
		}
		if (check == 0) break;
	}
	//printf("hour %d %d %d\n", hour, min, sec);
	for (int i = 0;; i++) {
		check = 0;
		if (time >= 60) {
			min += time / 60;
			time -= (time / 60) * 60;
		}
		if (min >= 60) {
			hour += min / 60;
			min = min % 60;
			check++;
		}
		if (check == 0) break;
	}
	//printf("min %d %d %d\n", hour, min, sec);
	for (int i = 0;; i++) {
		check = 0;
		sec += time;
		time = 0;
		if (sec >= 60) {
			min += sec / 60;
			sec = sec % 60;
			check++;
		}
		if (check == 0) break;
	}
	//printf("sec %d %d %d\n", hour, min, sec);
	//if over?
	for (int i = 0;; i++) {
		check = 0;
		if (hour > 23) {
			hour = hour % 24;
			check++;
		}
		if (min >= 60) {
			hour += min / 60;
			min = min % 60;
			check++;
		}
		if (sec >= 60) {
			min += sec / 60;
			sec = sec % 60;
			check++;
		}
		if (check == 0)break;
	}
	printf("%d %d %d", hour, min, sec);
	return 0;
}