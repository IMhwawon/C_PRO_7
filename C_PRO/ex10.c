//연습문제 10. 실수형 배열 매개변수로 받고 원소 합 리턴하는 함수 작성
#include <stdio.h>
float sum_array(float arr[], int size)
{
	float sum = 0.0;
	int i;
	for (i = 0; i < size; i++)
		sum += arr[i];
	return sum;
}

int main()
{
	float data[] = { 0.5, 0.12, 1.2, 0.99, 0.1 };
	int size = sizeof(data) / sizeof(data[0]);
	printf("data 함수의 합은 %.2f입니다.\n",sum_array(data, size));
}