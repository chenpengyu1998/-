/*  求 s=a+aa+aaa+aaaa+aa...a 的值， 其中 a是一个数字。
例如2+22+222+2222+22222(此时
共有5个数相加)，几个数相加有键盘控制。
1.程序分析：关键是计算出每一项的值 */
#include <stdio.h>
#include <math.h>
int main()
{
	int num1, num2, num3, i, sum=0;
	printf("please input  numbers:\n");
	scanf("%d %d",&num2,&num1);
	for (i=0,num3=0 ;i<num1;i++)
	{
		num3=num3+num2*pow(10,i);
		sum=sum+num3;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}