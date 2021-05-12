//예제 7-5. 배열의 복사
#include <stdio.h>
#define ARR_SIZE 5

int main()
{
	int x[ARR_SIZE] = { 10,20,30,40,50 };
	int y[ARR_SIZE] = { 0 };
	int i;

	for (i = 0; i < ARR_SIZE; i++)
		y[i] = x[i];

	for (i = 0; i < ARR_SIZE; i++)
		printf("%d ", y[i]);
	printf("\n");
}