//프로그래밍 과제 11. 정수형 배열 원소 임의의 순서로 섞기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main()
{
	int data[SIZE] = { 12,43,39,98,71,63,8,16,54,85 };
	int i, j;

	srand(time(NULL));
	int random, temp;

	printf("셔플 전: ");
	for (i = 0; i < SIZE; i++)
		printf("%2d ", data[i]);
	printf("\n");

	for (i = 0; i < SIZE; i++)
	{
		random = rand() % (SIZE - i) + i; 
		temp = data[i];
		data[i] = data[random];
		data[random] = temp;
	}

	printf("셔플 후: ");
	for (i = 0; i < SIZE; i++)
		printf("%2d ", data[i]);
	printf("\n");
}