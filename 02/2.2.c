#include <stdio.h>
int main()
{
	printf("1024 : %5d, %5x, %5o\n", 1024,1024,1024);
	printf("0x10 : %5d, %5x, %5o\n", 0x10,0x10,0x10);
	printf(" 077 : %5d, %#5x, %#5o\n",  077, 077, 077);
	return 0;
}
