//���� 7-10. �迭�� Ž��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_array(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int data[] = { 12,34,51,22,91,12,15 };
	int size, i;
	int key;

	size = sizeof(data) / sizeof(data[0]);
	printf("data	 = ");
	print_array(data, size);

	printf("ã�� ��(Ű) : ");
	scanf("%d", &key);
	for (i = 0; i < size; i++)
	{
		if (data[i] == key)
			printf("ã�� ������ �ε��� : %d\n", i);
	}
}