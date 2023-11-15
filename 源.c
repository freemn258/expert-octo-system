#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
int main()
{
	char ch = 0;//初始化变量
	int n = 0, i = 0, x = 0,y=0;//同上
	printf("请输入构成菱形的字符：");
	scanf("%c", &ch);
	putchar('\n');
	while (1)//人性化设计，直到用户输入正确的数据程序才会终止
	{
		printf("请输入菱形的行数(正奇数）：");
		scanf("%d", &n);
		if (n <= 0)
		{
			printf("请重新输入一个大于零的奇数！\n");
			while (getchar() != '\n');
			continue;
		}
		if (n % 2 != 1)
		{
			printf("请重新输入奇数!\n");
			while (getchar() != '\n');
			continue;
		}
		break;
	}
	putchar('\n');
	x = 1;//第一行永远只有一个字符
	y = n - 2;//除去中间行的下半段的最多字符数量
	for(i = 1; i <= (n - 1) * 0.5 + 1; i++)//先构建上半段（包括中间行）
	{
		int j1 = 0;
		for(j1 = (n - 1) * 0.5 - i +1 ; j1 > 0; j1--)//输出空格，逐行递减一个
		{
			printf(" ");
		}
		for (j1 = 1; j1 <= x; j1++)//输出“ch”，逐行递加两个
		{
			putchar(ch);
		}
		x += 2;//x在每次循环中自增2
		putchar('\n');//循环一次代表一行
	}
	for (i = 1; i <= (n - 1) * 0.5; i++)//构建除去中间行的下半段
	{
		int j2 = 0;
		for (j2 = 1; j2 <= i; j2++)//空格逐行递增一个
		{
			printf(" ");
		}
		for (j2 = y; j2 > 0; j2--)//字符逐行递减两个
		{
			putchar(ch);
		}
		y -= 2;//每个循环y都会自减2
		putchar('\n');
	}
	return 0;
}