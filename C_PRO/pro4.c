//���α׷��� ���� 4. �������� �Է��� ���� ã��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main()
{
	int data[SIZE] = { 23,45,62,12,99,83,23,50,12,37 };
	int key, i;
	int find = 0; //�߰� ���� (0�� false, 1�� true)

	printf("�迭 :");
	for (i = 0; i < SIZE; i++)
		printf("%2d ", data[i]);
	printf("\n");

	printf("ã�� ��? ");
	scanf("%d", &key);

	for(i=SIZE-1; i>=0;i--)
		if (data[i] == key)
		{
			find = 1;
			printf("%d�� %d��° �����Դϴ�.\n", key, i);
			break;
		}

	if (find == 0)
	{
		printf("ERROR\n");
	}
}