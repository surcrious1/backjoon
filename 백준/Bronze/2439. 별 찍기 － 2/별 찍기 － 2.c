#include <stdio.h>
int main()
{
	int n;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n-i; j++)
		{
			
			printf(" ");
		}
		for (int t = 0; t <= i; t++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}