#include <stdio.h>
int main(void)
{ 
	float F;
	printf("input F temperature : ");
	scanf("%f", &F);
	printf("%.1f F = %.1f C\n", F,(F - 32) * 5 / 9);
	return 0;
}
