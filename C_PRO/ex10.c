//�������� 10. �Ǽ��� �迭 �Ű������� �ް� ���� �� �����ϴ� �Լ� �ۼ�
#include <stdio.h>
float sum_array(float arr[], int size)
{
	float sum = 0.0;
	int i;
	for (i = 0; i < size; i++)
		sum += arr[i];
	return sum;
}

int main()
{
	float data[] = { 0.5, 0.12, 1.2, 0.99, 0.1 };
	int size = sizeof(data) / sizeof(data[0]);
	printf("data �Լ��� ���� %.2f�Դϴ�.\n",sum_array(data, size));
}