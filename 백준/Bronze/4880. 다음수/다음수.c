#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int a1, a2, a3;
	while (1) {
		scanf("%d %d %d", &a1, &a2, &a3);
		if (a1 == 0 && a2 == 0 && a3 == 0) break;
		if (a2 - a1 == a3 - a2 && a2 - a1 != 0) printf("AP %d\n", a3 + a2 - a1);
		else if ((a2 / a1 == a3 / a2) || (a2 - a1 == a3 - a2 && a2 - a1 == 0)) printf("GP %d\n", (a3 / a2) * a3);
	}
	return 0;
}