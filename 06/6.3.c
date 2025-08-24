#include<stdio.h>
#define N 10
int main(void)
{
	int fib[N] = {0, 1};
	int i;
	

	for(i = 2; i < N; i++)
		fib[i] = fib[i - 1] + fib[i -2];

	
	printf("fib num : ");
	for (i = 0; i < N; i++)
		printf("%d ", fib[i]);
	printf("\n");
	
	return 0;
}	
