#include <stdio.h>
int main(void)
{
	int i = 1, sum = 0, n = 10;
	
	for (i = 1; i <= n; i += 2)
		sum += i;
	
	printf("1 to %d odd sum : %d\n", n, sum);
	return 0;
}
