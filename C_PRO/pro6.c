//���α׷��� ���� 6. ��� ���Ҹ� Ư�������� ä���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

void fill_array(int arr[], int size, int input)
{
	int i;
	for (i = 0; i < SIZE; i++)
		arr[i] = input;
}
int main()
{
	int data[SIZE] = { 0 };
	int input, i;
	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d", &input);

	fill_array(data, SIZE, input);

	for (i = 0; i < SIZE; i++)
		printf("%d ", data[i]);
	printf("\n");
}