//���α׷��� ���� 7. �Ǽ��� �迭 �Ű������� ����, ������ �հ� �����ϴ� �Լ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

double sum_array(double arr[], int size)
{
	int i;
	double sum = 0.0;
	for (i = 0; i < SIZE; i++)
		sum += arr[i];
	return sum;
}

int main()
{
	double data[SIZE];
	int i;

	printf("�Ǽ� 5���� �Է��ϼ��� : ");
	for (i = 0; i < SIZE; i++)
		scanf("%lf", &data[i]);

	printf("�հ� : ");
		printf("%.6lf\n", sum_array(data, SIZE));
}