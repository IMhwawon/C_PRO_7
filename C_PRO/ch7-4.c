//���� 7 - 4. �Ǻ���ġ ���� ���ϱ�
#include <stdio.h>
#define ARR_SIZE 10

int main()
{
	int arr[ARR_SIZE] = { 1,1 };
	int i;

	for (i = 2; i < ARR_SIZE; i++) //2�� ~ 9��
		arr[i] = arr[i - 2] + arr[i - 1]; //arr[2] = arr[0] + arr[1]

	for (i = 0; i < ARR_SIZE; i++) //0�� ~ 9��
		printf("%d ", arr[i]);
	printf("\n");

	printf("arr[10] = %d\n", arr[10]); //10�� ���� ����X
	arr[10] = 100;
}