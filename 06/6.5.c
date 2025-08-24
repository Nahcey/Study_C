#include<stdio.h>
#define K 4
#define N 7
#define M 4

int main(void)
{
	int gradeYear[K][N][M];
	float student [N][K] = {0.0};
	int i, j, k;
	float sum;
	for (i = 0; i < K; ++i)
		for (j = 0; j < N; ++j)
			for (k = 0; k < M; ++k){
				printf("%1d grade %1d student %1d score : ",
					i + 1, j, k);
				scanf("%d",&gradeYear[i][j][k]);
			}

	for (i = 0; i < K; ++i)	
		for (j = 0; j < N; ++j)
			for (k = 0; k < M; ++k)
				student[j][i] += gradeYear[i][j][k];
	
	for (i = 0; i < N; ++i){
		for (j  = 0; j < K; ++j){
			student[i][j] /= M;
			printf("%1d student %1d grade Avg : %5.2f\n",
				i, j + 1, student[i][j]);
		}
		for (sum = 0.0, j = 0; j < K; ++j)
			sum += student[i][j];
		printf("student %1d Avg : %5.2f\n", i, sum / K);
	}
	return 0;
}
	
