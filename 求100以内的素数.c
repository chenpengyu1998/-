//求100以内的素数
#include <stdio.h>
int main(void)
{
	int a, b, i;
	for(i=1;i<=100;i++)
	{
		for(a=1;a<=i;a++)
		{
			b=i/a;
			if(b*a==i)
			{
				if(b!=1&&b!=i)
				{
					printf("%d\n", i);
					break;
				}
			}
		}
	}
	system("pause");
	return 0;
}