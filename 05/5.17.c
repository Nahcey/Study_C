#include<stdio.h>
int factorial_r(int n);
int main(void)
{
	int n = 5;
	printf("%2d! = %d\n", n, factorial_r(n));
	return 0;
}
int factorial_r(int n)
{
	if (n == 0)
		return 1;
	else
		return (n * factorial_r(n - 1));
}
