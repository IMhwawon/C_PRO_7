//���α׷��� ���� 1. �������� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main()
{
	int num1, cd, i;
	int data[SIZE] = { 0 };
	printf("ù ��° ��? ");
	scanf("%d", &num1);
	printf("����? ");
	scanf("%d", &cd);
	
	for (i = 0; i < SIZE; i++)
		data[i] = num1 + cd*i;

	printf("�������� :");
	for (i = 0; i < SIZE; i++)
		printf("%2d ", data[i]);
	printf("\n");
}