//���α׷��� ���� 10. ����ǥ ���� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define COUNT 10

int main()
{
	char seat[COUNT] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' };
	int input, i;
	int num = 0; //������
	while (1)
	{
		printf("���� �¼�: [ %c %c %c %c %c %c %c %c %c %c ]\n",
			seat[0], seat[1], seat[2], seat[3], seat[4], seat[5], seat[6], seat[7], seat[8], seat[9]);

		printf("������ �¼���? ");
		scanf("%d", &input);

		if (num + input <= COUNT)
		{
			for (i = num; i < num + input; i++)
			{
				printf("%d ", i+1);
			}
			printf(" �� �¼��� �����߽��ϴ�.\n");
			for (i = num; i < num + input; i++)
				seat[i] = 'X';
			num += input;
		}
		else
		{
			printf("���� �¼����� %d�̹Ƿ� %d�¼��� ������ �� �����ϴ�.\n", COUNT - num, input);
			break;
		}
	}
}