#include<stdio.h>
int main(void)
{
	char string[] = "abc";
	char *p;
	int i;
	p = string;
	for (i = 0; i < 3; ++i)
		printf("%c\n", *p++);
	printf("stirng = %s\n", string);
	p = string;
	for (i = 0; i < 3; ++i)
		printf("string = %s\n", string);
	printf("string = %s\n", string);
	return 0;
}
