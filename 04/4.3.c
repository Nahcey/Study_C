#include <stdio.h>
int main(void)
{
 	unsigned long long f;
	int n;
	
	printf("num to find factorial : ");
	scanf("%d",&n);
	printf("%d! = ", n);
	
	f = n;
	while(--n)
		f *= n;
	printf("%llu\n",f);
	return 0;
}
