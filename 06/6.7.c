#include<stdio.h>
#define N 10
int main(void)
{
	char str[N] = "Hello!";
	
	for (int i = 0; i < N; i++)
		if (str[i] == '\0')
			break;
		else
			printf("%c", str[i]);
	printf("\n");
	
	return 0;
}
