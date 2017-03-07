/* 入某年某月某日，判断这一天是这一年的第几天？
1.程序分析：以3月5日为例，应该先把前两个月的加起来，
然后再加上5天即本年的第几天，特殊
情况， 闰年且输入月份大于3时需考虑多加一天 */
#include <stdio.h>
int main()
{
	int year, month, day, sum, runnian;
	printf("请输入年份\n");
	scanf("%d",&year);
	printf("请输入月份\n");
	scanf("%d",&month);
	printf("请输入日期\n",&day);
	scanf("%d",&day);
	runnian=year/4;
	switch(month)
	{
		case 1:sum=0;break;
		case 2:sum=31;break;
		case 3:sum=60;break;
		case 4:sum=91;break;
		case 5:sum=121;break;
		case 6:sum=152;break;
		case 7:sum=182;break;
		case 8:sum=212;break;
		case 9:sum=243;break;
		case 10:sum=273;break;
		case 11:sum=304;break;
		case 12:sum=334;break;
		default:printf("your input is error!\n");break;	
	}
	if (runnian*4==year)
	{
		sum=sum+day;
		if(month>3)
		{
			sum++;
		}
		printf("%d",sum);
	}else
	{
		sum=sum+day;
		printf("%d",sum);
	}
	getch();
	return 0;
	
}