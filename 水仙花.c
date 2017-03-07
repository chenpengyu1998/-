//“水仙花”的计算
#include <stdio.h>
#include <math.h>
int main(void)
{
	int i=100, bai, shi, ge, num;
	for(i=100;i<=999;i++)
	{
		bai=i/100;
		shi=i/10%10;
		ge=i%10;
		num=pow(bai,3)+pow(shi,3)+pow(ge,3);
		if (num==i)
		{
			printf("%d\t", i);
			
		}
		
	}
	getch();
	return 0;
}