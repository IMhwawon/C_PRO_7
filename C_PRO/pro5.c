//���α׷��� ���� 5. �������� �Ǽ��� �迭�� ���� ���ġ
#include <stdio.h>
#define SIZE 10

int main()
{
	float data1[SIZE] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	float data2[SIZE] = { 0 };
	int i;
	
	for (i = 0; i < SIZE; i++)
		data2[SIZE - 1 - i] = data1[i];

	printf("�迭 : ");
	for (i = 0; i < SIZE; i++)
		printf("%.1f ", data1[i]);
	printf("\n");
	
	printf("���� : ");
	for (i = 0; i < SIZE; i++)
		printf("%.1f ", data2[i]);
	printf("\n");
}