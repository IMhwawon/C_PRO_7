//���α׷��� ���� 2. ������ ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main()
{
	int num1, cr, i;
	int data[SIZE] = { 0 };
	printf("ù ��° ��? ");
	scanf("%d", &num1);
	printf("����? ");
	scanf("%d", &cr);

	data[0] = num1;
	for (i = 1; i < SIZE; i++)
		data[i] = data[i - 1] * cr;

	printf("������ :");
	for (i = 0; i < SIZE; i++)
		printf("%2d ", data[i]);
	printf("\n");
}