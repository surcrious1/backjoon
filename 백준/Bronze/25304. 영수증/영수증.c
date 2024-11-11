#include <stdio.h>
int main()
{
	int x;
	scanf("%d\n", &x);
	int n;
	scanf("%d\n", &n);
	int sum = 0;
	int a, b;
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
			sum += a * b;
	}
	if(sum==x)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}