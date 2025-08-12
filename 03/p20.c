#include <stdio.h>
int main(void)
{
	float one = 1.0, zero = 0.0, r1, r2;
	
	r1 = one / zero;
	r2 = -one / zero;
	
	printf("inf * inf = %f\n", r1 * r1);
	printf("inf * -inf = %f\n", r1 * r2);
	printf("inf * 0 = %f\n", r1 * zero);
	printf("-inf * 0 = %f\n", r2 * zero);
	printf("1 / inf = %f\n", one / r1);
	printf("1 / -inf = %f\n", one / r2);
	printf("inf / inf = %f\n", r1 / r1);
	printf("inf / -inf = %f\n", r1 / r2);
	printf("inf - inf = %f\n", r1 - r1);
	printf("inf + 1 = %f\n", r1 + one);
	return 0;
}
