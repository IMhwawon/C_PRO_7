//�������� 8. ������ �迭 ������ �� ���
#include <stdio.h>

int main()
{
	int orders[] = { 3,5,1,2,2,4,3,1,1,2 };
	int sz = sizeof(orders) / sizeof(orders[0]);
	int sum = 0;
	int i;
	for (i = 0; i < sz; i++)
		sum += orders[i];
	printf("�հ� : %d\n", sum);
}