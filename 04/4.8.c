#include<stdio.h>
int main(void)
{
	int f1 = 0, f2 = 1, f3;
	
	for (f3 = f1 + f2; f3 <100; f3 = f1 + f2){
		f1 = f2;
		f2 = f3;
	}
	
	printf("The smallest num in the Fibonacci sequence greater than 100 : %d\n",f3);
	return 0;
}
