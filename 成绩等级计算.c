/* 利用条件运算符的嵌套来完成此题：学习成绩〉=90分
的同学用A表示，60-89分之间的用B表示，
60分以下的用C表示。
1.程序分析：(a〉b)?a:b这是条件运算符的基本例子。
2.程序源代码 */
#include <stdio.h>
int main()
{
	int score;
	char grade;
	printf("please input your score\n");
	scanf("%d", &score);
	grade=(score>=90)?'A':(score<60)?'C':'B';
	printf("your grade is %c", grade);
	getch();
	return 0;
}