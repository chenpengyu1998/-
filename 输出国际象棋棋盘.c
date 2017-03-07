/* 要求输出国际象棋棋盘。
1.程序分析：用i控制行，j来控制列，根据i+j的和的变化
来控制输出黑方格，还是白方格 */
#include <stdio.h>
int main()
{
	int i=0, j=0;
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if ((i+j)%2==0)
			{
				printf("  ");
			}
			else{
				printf("■");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
	
}