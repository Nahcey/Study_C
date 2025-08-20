#include <stdio.h>
int main(void)
{
	int i = 0;
	
	while (!(i == 1 || i == 2 || i == 3)){
		printf("Input 1 or 2 or 3");
		scanf("%d",&i);
	}
	
	if (i == 2 || i == 3)
		printf("cat\n");
	else if (i == 1)
		printf("dog\n");
	if (i == 2)
		printf("fox\n");
	
	return 0;
}
	
	
