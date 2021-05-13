//프로그래밍 과제 3. 최댓값과 최솟값 찾는 프로그램
#include <stdio.h>
#define SIZE 10

int main()
{
	int data[SIZE] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int max = data[0], min = data[0], i;

	printf("배열: ");
	for (i = 0; i < SIZE; i++)
		printf("%2d ", data[i]);
	printf("\n");

	for (i = 0; i < SIZE; i++)
		if (max < data[i]) 
		{ //data[i] 값이 max값보다 크면
			max = data[i];
		}
		else if (min > data[i])
		{ //data[i] 값이 min값보다 작으면
			min = data[i];
		}

	printf("최댓값 : %d\n", max);
	printf("최솟값 : %d\n", min);
}