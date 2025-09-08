#include<stdio.h>
int main()
{
	float x = 1.0;
	int *p = (int *) &x;
	*p = 1077936128;
	printf("x = %f, *p = %d\n", x, *p);
	return 0;
}
