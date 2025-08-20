#include<stdio.h>
#include<tgmath.h>

int main(void)
{
	float x = 0.0;
	double d = 0.0;
	long double ld = 0.0;
	
	printf("   x  sinf(x)  sqrt(x)  logl(x)\n");
	printf("-------------------------------\n");
	for (x = 0.0; x <= 1000.0; x += 84.37){
		ld = d = x;
		printf("%6.2f %8.4f %8.4f %8.4Lf\n",
			x, sin(x), sqrt(d), log(ld));
	}
	printf("-------------------------------\n");
	return 0;
}
