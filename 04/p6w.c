#include <stdio.h>
int main(void)
{
	int i = 0;

	while (i < 5){
	
	int j = 0;
		while (j < i + 1){
			printf("*");
			j++;
		}
	printf("\n");
	i++;
	}
	return 0;
}
