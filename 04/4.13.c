#include <stdio.h>
int main(void)
{
	int n, i, sum;
	
	printf("Input n : ");
	scanf("%d",&n);
	
	for (sum = i = 0; i <= n; i++)
	{
		if (i % 2)
			continue;
		sum += i;
		// when encounter continue
	}

	printf("even sum to %d = %d\n", n, sum);
	
	return 0;
}
