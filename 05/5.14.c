#include<stdio.h>

_Noreturn void goodBye(void)
{
	printf("Bye!!\n");
}

int main(void)
{
	printf("Call goodBye() function...\n");
	goodBye();
	printf("Return from goodBye()\n");
	
	return 0;
}
