//프로그래밍 과제 4. 역순으로 입력한 원소 찾기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main()
{
	int data[SIZE] = { 23,45,62,12,99,83,23,50,12,37 };
	int key, i;
	int find = 0; //발견 여부 (0은 false, 1은 true)

	printf("배열 :");
	for (i = 0; i < SIZE; i++)
		printf("%2d ", data[i]);
	printf("\n");

	printf("찾을 값? ");
	scanf("%d", &key);

	for(i=SIZE-1; i>=0;i--)
		if (data[i] == key)
		{
			find = 1;
			printf("%d는 %d번째 원소입니다.\n", key, i);
			break;
		}

	if (find == 0)
	{
		printf("ERROR\n");
	}
}