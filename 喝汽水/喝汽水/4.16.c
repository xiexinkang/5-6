#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);
	//���������ˮ�ȵ�
	if (money == 0)
		total = 0;
	else
		total = 2 * money - 1;
	//total = money;
	//empty = money;
	////����������ˮ
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;

	//}
	printf("total=%d\n", total);
	return 0;
}