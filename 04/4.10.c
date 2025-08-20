#include <stdio.h>
int main(void)
{
	unsigned long long f;
	int n, i;
	
	while (1)
	{
		printf("Input number to find factorial : ");
		scanf("%d",&n);
		if (n > 0)
			break;
		printf("negative. input positive.\n");
	}

	//when encounter break in while statement
	for (f = i = 1; i <= n; i++)
		f *= i;
	printf("%d! = %llu\n", n, f);
	
	return 0;
}
