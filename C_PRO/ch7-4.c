//예제 7 - 4. 피보나치 수열 구하기
#include <stdio.h>
#define ARR_SIZE 10

int main()
{
	int arr[ARR_SIZE] = { 1,1 };
	int i;

	for (i = 2; i < ARR_SIZE; i++) //2번 ~ 9번
		arr[i] = arr[i - 2] + arr[i - 1]; //arr[2] = arr[0] + arr[1]

	for (i = 0; i < ARR_SIZE; i++) //0번 ~ 9번
		printf("%d ", arr[i]);
	printf("\n");

	printf("arr[10] = %d\n", arr[10]); //10번 방은 존재X
	arr[10] = 100;
}