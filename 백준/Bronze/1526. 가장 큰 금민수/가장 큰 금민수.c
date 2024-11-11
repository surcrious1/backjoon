#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char n[1000000];
	int w;
	int cnt = 0;
	scanf("%d",&w);
	while(1){
		sprintf(n, "%d", w);
		cnt = 0;
		for (int j = 0; j < strlen(n); j++) {
			if(n[j] == '4' || n[j] == '7') {//모두 4,7로 구성되었을 때
				cnt++;
			}
		}
		if (cnt == strlen(n)) {
			printf("%d", w);
			return 0;
		}
		w--;
	}
	return 0;
}