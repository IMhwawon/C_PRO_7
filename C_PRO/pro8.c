//���α׷��� ���� 8. ���ε� ���� ��� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main()
{
	int price[5];
	int per, i;
	int discount[5];

	printf("��ǰ�� %d���� �Է��ϼ���: ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf("%d", &price[i]);

	printf("������(%%)? ");
	scanf("%d", &per);

	for (i = 0; i < SIZE; i++)
	{
		discount[i] = price[i] - price[i] * per / 100;
		printf("����: %7d --> ���ΰ�: %7d\n", price[i], discount[i]);
	}
}