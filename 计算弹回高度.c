/* 一球从100米高度自由落下，每次落地后反跳回原高度
的一半；再落下，求它在
第10次落地时，共经过多少米？第10次反弹多高 */
#include <stdio.h>
int main(void)
{
	float high=100.0, sum=0;
	int i=1;
	for (i=1; i<11;i++)
	{
		sum=sum+high;
		high = high / 2;
		sum=sum+high;
		printf("%f\t%f", high, sum);
	}
	printf("high=%f, sum=%f", high, sum);
	system("pause");
	return 0;
}