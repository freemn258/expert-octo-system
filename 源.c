#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
int main()
{
	char ch = 0;//��ʼ������
	int n = 0, i = 0, x = 0,y=0;//ͬ��
	printf("�����빹�����ε��ַ���");
	scanf("%c", &ch);
	putchar('\n');
	while (1)//���Ի���ƣ�ֱ���û�������ȷ�����ݳ���Ż���ֹ
	{
		printf("���������ε�����(����������");
		scanf("%d", &n);
		if (n <= 0)
		{
			printf("����������һ���������������\n");
			while (getchar() != '\n');
			continue;
		}
		if (n % 2 != 1)
		{
			printf("��������������!\n");
			while (getchar() != '\n');
			continue;
		}
		break;
	}
	putchar('\n');
	x = 1;//��һ����Զֻ��һ���ַ�
	y = n - 2;//��ȥ�м��е��°�ε�����ַ�����
	for(i = 1; i <= (n - 1) * 0.5 + 1; i++)//�ȹ����ϰ�Σ������м��У�
	{
		int j1 = 0;
		for(j1 = (n - 1) * 0.5 - i +1 ; j1 > 0; j1--)//����ո����еݼ�һ��
		{
			printf(" ");
		}
		for (j1 = 1; j1 <= x; j1++)//�����ch�������еݼ�����
		{
			putchar(ch);
		}
		x += 2;//x��ÿ��ѭ��������2
		putchar('\n');//ѭ��һ�δ���һ��
	}
	for (i = 1; i <= (n - 1) * 0.5; i++)//������ȥ�м��е��°��
	{
		int j2 = 0;
		for (j2 = 1; j2 <= i; j2++)//�ո����е���һ��
		{
			printf(" ");
		}
		for (j2 = y; j2 > 0; j2--)//�ַ����еݼ�����
		{
			putchar(ch);
		}
		y -= 2;//ÿ��ѭ��y�����Լ�2
		putchar('\n');
	}
	return 0;
}