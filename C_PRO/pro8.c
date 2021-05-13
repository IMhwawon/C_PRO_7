//프로그래밍 과제 8. 할인된 가격 계산 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main()
{
	int price[5];
	int per, i;
	int discount[5];

	printf("상품가 %d개를 입력하세요: ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf("%d", &price[i]);

	printf("할인율(%%)? ");
	scanf("%d", &per);

	for (i = 0; i < SIZE; i++)
	{
		discount[i] = price[i] - price[i] * per / 100;
		printf("가격: %7d --> 할인가: %7d\n", price[i], discount[i]);
	}
}