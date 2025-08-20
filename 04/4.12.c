#include <stdio.h>
int main(void)
{
	unsigned long long f;
	int n, i;
	
	while (1)
	{
		printf("Input number to find factorial : ");
		scanf("%d",&n);
		if (n < 0){	
			printf("negative. input positive.\n");
			continue;
		}
		for (f = i = 1; i <= n; i++)
			f *= i;
		printf("%d! = %llu\n", n, f);
		break;
		// when encounter continue
	}
	
	return 0;
}
