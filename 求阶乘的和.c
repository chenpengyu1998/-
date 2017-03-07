/* 题目：求1+2!+3!+...+20!的和 */
#include <stdio.h>
int main(void)
{
	int num1, i=1;
	float sum=0, num2=1;
	for (i=1;i<=20;i++)
	{
		for(num1=1;num1<=i;num1++)
		{
			num2=num2*num1;
		}
		sum=sum+num2;
	}
	printf("%e\n", sum);
	system("pause");
	return 0;
}