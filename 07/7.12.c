#include<stdio.h>
#include<stdlib.h>
#define N 10
int compare_int(const void *, const void *);

int main(void)
{
	int array[N] = { 3, 6, 2, 0, 1, 10, 4, 8, 9, 7 };

	qsort(array, N, sizeof(int), compare_int);

	for (int i = 0; i < N; i++)
		printf("%d", array[i]);
	printf("\n");
	return 0;
}

int compare_int(const void *p, const void *q)
{
	if (*(int *)p > *(int *)q)
		return 1;
	else if (*(int *)p < *(int *)q)
		return -1;
	return 0;
}
