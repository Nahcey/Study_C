#include <stdio.h>
int main(void)
{
	int i = 0;
	
	while (!(i == 1 || i == 2 || i == 3)){
		printf("Input 1 or 2 or 3");
		scanf("%d",&i);
	}
	
	if (i == 1 || i == 2)
		printf("cat\n");
	printf("dog\n");
	if (i == 3)
		printf("fox\n");
	
	return 0;
}
	
	
