#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int n, sum = 0, check = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &n);
		sum += n;
		if ((i == 0 || i == 1) && n > 100) check = 1;
		else if ((i == 2 || i == 3) && n > 200) check = 1;
		else if ((i == 4 || i == 5) && n > 300) check = 1;
		else if ((i == 6 || i == 7) && n > 400) check = 1;
		else if (i == 8 && n > 500) check = 1;
	}
	if (check == 1) printf("hacker");
	else if (sum >= 100) printf("draw");
	else printf("none");
	return 0;
}