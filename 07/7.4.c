#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
	int a = 100, b = 200;

	printf("Before swap() : a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("After swap() : a = %d, b = %d\n", a, b);

	return 0;
}

void swap (int *p, int *q)
{
	int tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;
	return;
}

