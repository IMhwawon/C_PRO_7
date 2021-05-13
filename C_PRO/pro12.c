//프로그래밍 과제 12.  성적 계산 프로그램
#include <stdio.h>
#define ROW 5
#define COL 5

int main()
{
	int grade[5][5] = { {28,28,26,9},{30,27,30,10},{25,26,24,8},{18,22,22,5},{24,25,30,10} };
	float avg[5] = { 0.0 };
	int i,j;

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL - 1; j++)
			grade[i][4] += grade[i][j];
	}

	for (i = 0; i < COL; i++) {
		for (j = 0; j < ROW; j++)
			avg[i] += grade[j][i];
		avg[i] /= 5.0;
	}

	printf("	    중간  기말  팀플  출석  총점\n");
	for (i = 0; i < ROW; i++)
	{
		printf("학생 %d번: %5d %5d %5d %5d %5d\n",i+1, grade[i][0],grade[i][1], grade[i][2], grade[i][3], grade[i][4]);
	}

	printf("항목별 평균: %2.1f  %2.1f  %2.1f  %2.1f  %2.1f\n",avg[0],avg[1], avg[2], avg[3], avg[4]);
}