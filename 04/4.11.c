#include <stdio.h>
int main(void)
{
	int f1 = 0, f2 = 1, f3;
	
	f3 = f1 + f2;
	for ( ; ; ){
		f1 = f2;
		f2 = f3;
		f3 = f1 + f2;
		if (f3 > 100)
			break;
	}
	
	printf("The smallest num in the Fibonacci sequence greater than 100 : %d\n",f3);
	return 0;
}
