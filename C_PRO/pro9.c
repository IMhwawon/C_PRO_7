//���α׷��� ���� 9. 3X3 ����� ���� ���ϴ� ���α׷�
#include <stdio.h>
#define SIZE 3

int main()
{
	int x[3][3] = { 10,20,30,40,50,60,70,80,90 };
	int y[3][3] = { 9,8,7,6,5,4,3,2,1 };
	int xy[3][3] = { 0 };
	int i, j;

	printf("x ��� : \n");
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++)
			printf("%3d ", x[i][j]);
		printf("\n");
	}
	printf("\n");

	printf("y ��� : \n");
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++)
			printf("%3d ", y[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < SIZE; i++)
		for (j = 0; j < SIZE; j++)
			xy[i][j] = x[i][j] + y[i][j];

	printf("x + y ��� : \n");
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++)
			printf("%3d ", xy[i][j]);
		printf("\n");
	}
}