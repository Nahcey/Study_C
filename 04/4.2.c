#include <stdio.h>
int main(void)
{
	int f1 = 0, f2 = 1, f3;
	
	f3 = f1 + f2;
	while (f3 < 100)
	{
		f1 = f2;
		f2 = f3;
		f3 = f1 + f2;
	}
	
	printf("The smallest number in the Fibonacci sequence greater than 100 : %d\n",f3);
	return 0;
}
