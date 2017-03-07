//给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字
#include <stdio.h>
int main()
{
	int num , ge, shi, bai, qian, wan;
	printf("please input a number!\n");
	scanf("%d", &num);
	wan = num/10000;
	qian = num%10000/1000;
	bai = num % 1000/100;
	shi = num % 100/10;
	ge = num % 10;
	if (wan!=0)
	{
		printf("这是一个五位数，其逆序打印的数字为%d%d%d%d%d\n",ge, shi, bai, qian, wan);
	}else if(qian!=0)
	{
		printf("这是一个四位数，其逆序打印的数字为%d%d%d%d\n",ge, shi, bai, qian);
	}else if(bai!=0)
	{
		printf("这是一个三位数，其逆序打印的数字为%d%d%d\n",ge, shi, bai);
	}else if(shi!=0)
	{
		printf("这是一个二位数，其逆序打印的数字为%d%d\n",ge, shi);
	}else if(ge!= 0)
	{
		printf("这是一个一位数，其逆序打印的数字为%d\n",ge);
	}else{
		printf("the number that you input is error! please input another number!\a\n");
		
	}
	system("pause");
	return 0;
	
}