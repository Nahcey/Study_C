#include <stdio.h>
int main()
{
	printf("   3.14 : %.2f, %.2a, %.2e\n", 3.14, 3.14, 3.14);
	printf(" 314e-2 : %.2f, %.2a, %.2e\n", 314e-2, 314e-2, 314e-2);
	printf("0x10p-2 : %.2f, %.2a, %.2e\n", 0x10p-2, 0x10p-2, 0x10p-2);
	return 0;
}
