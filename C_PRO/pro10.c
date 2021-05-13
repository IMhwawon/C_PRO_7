//프로그래밍 과제 10. 기차표 예매 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define COUNT 10

int main()
{
	char seat[COUNT] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' };
	int input, i;
	int num = 0; //누적값
	while (1)
	{
		printf("현재 좌석: [ %c %c %c %c %c %c %c %c %c %c ]\n",
			seat[0], seat[1], seat[2], seat[3], seat[4], seat[5], seat[6], seat[7], seat[8], seat[9]);

		printf("예매할 좌석수? ");
		scanf("%d", &input);

		if (num + input <= COUNT)
		{
			for (i = num; i < num + input; i++)
			{
				printf("%d ", i+1);
			}
			printf(" 번 좌석을 예매했습니다.\n");
			for (i = num; i < num + input; i++)
				seat[i] = 'X';
			num += input;
		}
		else
		{
			printf("남은 좌석수가 %d이므로 %d좌석을 예매할 수 없습니다.\n", COUNT - num, input);
			break;
		}
	}
}