#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	if (n >= m) {
		if(m==1|m==2) printf("NEWBIE!");
		else printf("OLDBIE!");
	}
	else if (n < m) printf("TLE!");
	return 0;
}
