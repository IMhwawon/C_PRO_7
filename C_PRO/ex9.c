//�������� 9. ������ �迭 �Ű������� �ް� �迭 ��ü�� 0���� ä��� �Լ� �ۼ�
#include <stdio.h>
void fill_array(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = 0;
}

int main()
{
	int data[] = { 10,20,30,40,50,60,70 };
	int size = sizeof(data) / sizeof(data[0]);
	int i;

	printf("���� �� data = ");
	for (i = 0; i < size; i++)
		printf("%2d ", data[i]);
	printf("\n");

	fill_array(data, size);

	printf("���� �� data = ");
	for (i = 0; i < size; i++)
		printf("%2d ", data[i]);
	printf("\n");
}