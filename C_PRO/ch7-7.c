//예제 7-7. 2차원 배열의 선언 및 사용
#include <stdio.h>
#define ROW 3
#define COL 2

int main()
{
	int data[ROW][COL];
	int i, j, k;

	for (i = 0, k = 0; i < ROW; i++) // 0~2 0 1 2
		for (j = 0; j < COL; j++) // 0~1 0 1 0 1 0 1
			data[i][j] = ++k; //00 1 01 2 10 3 11 4 20 5 21 6

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++)
			printf("%3d ", data[i][j]);
		printf("\n");
	}

	printf("sizeof(data)		= %d\n", sizeof(data));
	printf("sizeof(data[0])		= %d\n", sizeof(data[0]));
	printf("sizeof(data[0][0]	= %d\n", sizeof(data[0][0]));
}