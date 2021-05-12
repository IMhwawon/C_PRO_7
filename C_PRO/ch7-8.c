//예제 7-8. 2차원 배열의 초기화
#include <stdio.h>
#define COL 2

int main()
{
	int data[][COL] = {
		{10,20},{30,40}, {50,60}
	};
	int row_size = sizeof(data) / sizeof(data[0]);
	int i, j;

	for (i = 0; i < row_size; i++) {
		for (j = 0; j < COL; j++)
			printf("%3d ", data[i][j]);
		printf("\n");
	}
}