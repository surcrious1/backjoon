#include <stdio.h>
int main()
{
	int A;
	int B;
	scanf("%d %d", &A, &B);
	printf("%d\n", A * (B % 10));
	printf("%d\n", A * (B % 100 / 10));
	printf("%d\n", A * (B / 100));
	printf("%d", A * B);
	return 0;
}