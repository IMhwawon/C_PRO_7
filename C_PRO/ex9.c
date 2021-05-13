//연습문제 9. 정수형 배열 매개변수로 받고 배열 전체를 0으로 채우는 함수 작성
#include <stdio.h>
void fill_array(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		arr[i] = 0;
}

int main()
{
	int data[] = { 10,20,30,40,50,60,70 };
	int size = sizeof(data) / sizeof(data[0]);
	int i;

	printf("변경 전 data = ");
	for (i = 0; i < size; i++)
		printf("%2d ", data[i]);
	printf("\n");

	fill_array(data, size);

	printf("변경 후 data = ");
	for (i = 0; i < size; i++)
		printf("%2d ", data[i]);
	printf("\n");
}