#include<stdio.h>
#define N 10
int main(void)
{
	int arr[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *p = NULL, *q = NULL;

	p = &arr[4];
	q = p + 5;
	printf("*q = %d\n",*q);
	printf("p - q = %d\n", p - q);
	printf("q - p = %d\n", q - p);
	printf("(long) q - (long) p = %d\n", (long) q - (long) p);
	printf("(long) p - (long) q = %d\n", (long) p - (long) q);

	return 0;
}
