//프로그래밍 과제 7. 실수형 배열 매개변수로 전달, 원소의 합계 리턴하는 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

double sum_array(double arr[], int size)
{
	int i;
	double sum = 0.0;
	for (i = 0; i < SIZE; i++)
		sum += arr[i];
	return sum;
}

int main()
{
	double data[SIZE];
	int i;

	printf("실수 5개를 입력하세요 : ");
	for (i = 0; i < SIZE; i++)
		scanf("%lf", &data[i]);

	printf("합계 : ");
		printf("%.6lf\n", sum_array(data, SIZE));
}