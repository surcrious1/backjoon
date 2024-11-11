#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<stack>

using namespace std;

int main(void) {
	float sp, sw, np, nw, up, uw;
	float s, n, u;

	scanf("%f %f", &sp, &sw);
	scanf("%f %f", &np, &nw);
	scanf("%f %f", &up, &uw);

	sp *= 10;
	sw *= 10;
	if (sp >= 5000) sp -= 500;
	s = sw / sp;

	np *= 10;
	nw *= 10;
	if (np >= 5000) np -= 500;
	n = nw / np;

	up *= 10;
	uw *= 10;
	if (up >= 5000) up -= 500;
	u = uw / up;

	if (s > n && s > u) printf("S");
	else if (n > s && n > u) printf("N");
	else printf("U");
	return 0;
}

