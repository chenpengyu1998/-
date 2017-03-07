//一个5位数， 判断它是不是回文数。 即12321是回文数，个位与万位相同，十位与千位相同
#include <stdio.h>
int main(void)
{
	int num, ge, shi, bai, qian, wan;
	printf("please input a number!\n");
	scanf("%d", &num);
	
	wan= num/10000;
	qian= num%10000/1000;
	if(wan>=10)
	{
		printf("error!\a\n");
		return 0;
	}
	bai=num%1000/100;
	shi = num%100/10;
	ge= num%10;
	if (ge==wan && shi==qian)
	{
		printf("这是一个回文数\n");
	}else{
		printf("这不是一个回文数\n");
	}
	getch();
	return 0;
}