#include<stdio.h>
#include<stdlib.h>
#define N 10
int main(void)
{
	int (*p)[N], *q;

	p = (int (*)[N])calloc(N * N, sizeof(int));

	q = (int *) p;
	for (int i = 0; i < N * N; i++)
		q[i] = i;

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++)
			printf("%3d ", p[i][j]);
		putchar('\n');
	}

	free(p);

	return 0;
}
