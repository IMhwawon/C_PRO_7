//���α׷��� ���� 3. �ִ񰪰� �ּڰ� ã�� ���α׷�
#include <stdio.h>
#define SIZE 10

int main()
{
	int data[SIZE] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int max = data[0], min = data[0], i;

	printf("�迭: ");
	for (i = 0; i < SIZE; i++)
		printf("%2d ", data[i]);
	printf("\n");

	for (i = 0; i < SIZE; i++)
		if (max < data[i]) 
		{ //data[i] ���� max������ ũ��
			max = data[i];
		}
		else if (min > data[i])
		{ //data[i] ���� min������ ������
			min = data[i];
		}

	printf("�ִ� : %d\n", max);
	printf("�ּڰ� : %d\n", min);
}