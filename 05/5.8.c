#include<stdio.h>

int next_even(void);

int main(void)
{
	for (int i = 0; i < 10; i++){
		printf("%d", next_even());
		if (i != 9)
			printf(", ");
	}
	
	printf("\n");
	return 0;
}

int next_even(void)
{
	static int value;
	int temp;

	temp = value;
	value += 2;
	return temp;
}

