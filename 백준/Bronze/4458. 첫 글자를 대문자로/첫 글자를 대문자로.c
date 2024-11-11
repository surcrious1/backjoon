#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main(void) {
	int tc;
	char str[31] = { 0, }, c;
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++) {
		if(i==0) scanf("%c",&c);
		scanf("%[^\n]s", str);
		getchar();
		if('a' <= str[0]&&str[0]<='z') str[0] = str[0] - 'a' + 'A';
		printf("%s\n", str);
	}
	return 0;
}