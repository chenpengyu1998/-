/* 目：输入三个整数x,y,z，请把这三个数由小到大输出。
1.程序分析：我们想办法把最小的数放到x上，先将x与y进
行比较，如果x〉y则将x与y的值进行交换，
然后再用x与z进行比较， 如果x〉z则将x与z
的值进行交换，这样能使x最小。 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num1,num2,num3,i;
	printf("please input three number!\n");
	scanf("%d , %d ,%d",&num1,&num2,&num3);
	if (num1>num2)
	{
		i=num1 ;
		num1=num2;
		num2=i;
		
	}
	if (num2>num3)
	{
		i=num2;
		num2=num3;
		num3=i;
	}
	if (num1>num3);
	{
		i=num1;
		num1=num3;
		num3=i;
	}

	printf("%d<%d<%d", num1, num2, num3);
	getch();
	return 0;
}