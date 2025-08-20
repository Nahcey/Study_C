#include <stdio.h>
int main(void)
{
	unsigned long long f;
	int n, i;
	
	goto read;
compute:
	for (f = i = 1; i <= n; i++)
		f *= i;
	printf("%d! = %llu\n", n, f);
	goto end;

read:
	
	printf("Input number to find factorial : ");
	scanf("%d",&n);
	if (n < 0){
		printf("negative. input positive.\n");
		goto read;
	}
	goto compute;

end:
	return 0;
}
