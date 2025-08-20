#include <stdio.h>
int main(void)
{
	int i = 1, sum = 0, n;

	printf("Input int : ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
		sum += i;
	
	printf("1 to %d sum : %d\n", i - 1, sum);
	return 0;
}
