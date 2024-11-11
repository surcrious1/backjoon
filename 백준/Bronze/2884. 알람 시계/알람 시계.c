#include <stdio.h>
int main()
{
	int h,m;
	int time = 0;
	scanf("%d %d", &h,&m);
	if ((h==0&&m>=45)||h>=1)
	{
		time = h * 60 + m;
		time = time - 45;
		printf("%d %d", time/60, time%60);
	}
	else if(h==0&&m<45)
	{
		time = (h + 24) * 60 + m;
		time = time - 45;
		printf("%d %d",time/60, time%60);
	}
	return 0;
}