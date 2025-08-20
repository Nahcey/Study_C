#include<stdio.h>
#include<stdlib.h>

_Noreturn void goodBye(void)
{
	printf("Bye!!\n");
	abort();
}

int main(void)
{
	printf("Call goodBye() function...\n");
	goodBye();
	printf("Return from goodBye()\n");
	
	return 0;
}
