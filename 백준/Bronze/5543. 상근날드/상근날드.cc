#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
	int sang, jung, ha;
	int ya, ho;
	scanf("%d %d %d %d %d", &sang, &jung, &ha, &ya, &ho);
	int hambugi = sang;
	if (hambugi > jung)hambugi = jung;
	if (hambugi > ha)hambugi = ha;
	int mul = ya;
	if (mul > ho)mul = ho;
	printf("%d", hambugi + mul - 50);
}