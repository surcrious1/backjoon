#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int n,m;
	int modify;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		modify = m % 100;
		if ((m+1) % modify == 0) printf("Good\n");
		else printf("Bye\n");
	}
	return 0;
}