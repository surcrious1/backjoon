#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char str[10];
	scanf("%s", str);
	if (strcmp(str, "fdsajkl;") == 0 || strcmp(str, "jkl;fdsa") == 0) printf("in-out");
	else if (strcmp(str, "asdf;lkj") == 0 || strcmp(str, ";lkjasdf") == 0) printf("out-in");
	else if (strcmp(str, "asdfjkl;") == 0) printf("stairs");
	else if (strcmp(str, ";lkjfdsa") == 0) printf("reverse");
	else printf("molu");
	return 0;
}