//예제 7-3. 배열 원소의 사용
#include <stdio.h>
#define ARR_SIZE 5

int absolute(int x)
{
	return x > 0 ? x : -x;
}

int main()
{
	int x[ARR_SIZE] = { -4,0,28,3,-12 };
	int y[ARR_SIZE] = { 0 };
	int i;

	for (i = 0; i < ARR_SIZE; i++)
		y[i] = absolute(x[i]);

	for (i = 0; i < ARR_SIZE; i++)
		printf("%d ", y[i]);
	printf("\n");
}