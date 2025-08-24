#include<stdio.h>
#define N 7
#define M 4

int main(void)
{
	int grade[N][M], student[N];
	int i,j;
	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++){
			printf("Student %1d Grade %d Score: ", i, j);
			scanf("%d", &grade[i][j]);
		}
	for (i = 0; i < N; ++i){
		student[i] = 0;
		for (j = 0; j < M; ++j)
			student[i] += grade[i][j];
		printf("Student %1d Avg : %5.2f\n", i, (float)student[i] / M);
	}
	return 0;
}
