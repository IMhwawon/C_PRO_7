//프로그래밍 과제 1. 등차수열 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main()
{
	int num1, cd, i;
	int data[SIZE] = { 0 };
	printf("첫 번째 항? ");
	scanf("%d", &num1);
	printf("공차? ");
	scanf("%d", &cd);
	
	for (i = 0; i < SIZE; i++)
		data[i] = num1 + cd*i;

	printf("등차수열 :");
	for (i = 0; i < SIZE; i++)
		printf("%2d ", data[i]);
	printf("\n");
}