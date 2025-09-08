#include<stdio.h>
int main(void)
{
	char	*cp;
	int 	*ip;
	long long *llp;
	float	*fp;
	double	*dp;
	printf("char * %d\n", sizeof(cp));
	printf("int * %d\n", sizeof(ip));
	printf("long long * %d\n", sizeof(llp));
	printf("float * %d\n", sizeof(fp));
	printf("float * %d\n", sizeof(dp));
	return 0;
}
