//프로그래밍 과제 2. 등비수열 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main()
{
	int num1, cr, i;
	int data[SIZE] = { 0 };
	printf("첫 번째 항? ");
	scanf("%d", &num1);
	printf("공비? ");
	scanf("%d", &cr);

	data[0] = num1;
	for (i = 1; i < SIZE; i++)
		data[i] = data[i - 1] * cr;

	printf("등비수열 :");
	for (i = 0; i < SIZE; i++)
		printf("%2d ", data[i]);
	printf("\n");
}