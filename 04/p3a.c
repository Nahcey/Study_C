#include <stdio.h>
int main(void)
{
	int i = 0;
	
	while (!(i == 1 || i == 2 || i == 3)){
		printf("Input 1 or 2 or 3");
		scanf("%d",&i);
	}
	
	if (i == 1)
		printf("cat\n");
	else if (i == 2)
		printf("dog\n");
	else if (i == 3)
		printf("fox\n");
	
	return 0;
}
	
	
