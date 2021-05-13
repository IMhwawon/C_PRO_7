//프로그래밍 과제 9. 3X3 행렬의 합을 구하는 프로그램
#include <stdio.h>
#define SIZE 3

int main()
{
	int x[3][3] = { 10,20,30,40,50,60,70,80,90 };
	int y[3][3] = { 9,8,7,6,5,4,3,2,1 };
	int xy[3][3] = { 0 };
	int i, j;

	printf("x 행렬 : \n");
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++)
			printf("%3d ", x[i][j]);
		printf("\n");
	}
	printf("\n");

	printf("y 행렬 : \n");
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++)
			printf("%3d ", y[i][j]);
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < SIZE; i++)
		for (j = 0; j < SIZE; j++)
			xy[i][j] = x[i][j] + y[i][j];

	printf("x + y 행렬 : \n");
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++)
			printf("%3d ", xy[i][j]);
		printf("\n");
	}
}