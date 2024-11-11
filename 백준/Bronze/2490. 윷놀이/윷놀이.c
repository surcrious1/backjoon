#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int main(void) {
	int n1,n2,n3,n4, cnt;
	for (int i = 0; i < 3; i++) {
		cnt = 0;
		scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
		cnt = n1 + n2 + n3 + n4;
		//0배 1등
		if (cnt == 0) printf("D\n");//0 0 0 0
		else if (cnt == 1) printf("C\n");//1 0 0 0
		else if (cnt == 2) printf("B\n");//1 1 0 0
		else if (cnt == 3) printf("A\n");//1 1 1 0
		else if (cnt == 4) printf("E\n");//1 1 1 1
	}
	return 0;
}