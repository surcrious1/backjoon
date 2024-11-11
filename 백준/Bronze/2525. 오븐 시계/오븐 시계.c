#include <stdio.h>
int main()
{
	int h,m,t,time;
	scanf("%d %d %d", &h,&m, &t);
	if (h*60+m+t<24*60)
	{
		time = h * 60 + m;
		time = time + t;
		printf("%d %d", time/60, time%60);
	}
	else 
	{
		time = h * 60 + m - 24 * 60;
		time = time + t;
		printf("%d %d",time/60, time%60);
	}
	return 0;
}