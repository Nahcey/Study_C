#include <stdio.h>
int main(void)
{
	unsigned long long f;
	int n;
	
	do {
		printf("Input Number to find factorial : ");
		scanf("%d",&n);
		if (n < 0)
			printf("\n negative. input positive\n");
	} while (n < 0);

	printf("%d! = ", n);
	f = n;
	while (--n)
		f *= n;
	printf("%llu\n", f);
	return 0;
}
