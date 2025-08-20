#include<stdio.h>

int factorial(int);

int main(void)
{
	int height, f_row, f_column, f_row_column;

	printf("h (1 ~ 13) : ");
	scanf("%d",&height);
	
	for (int row = 0; row < height; row++){
		
		for (int s = 0; s <= (height - row - 2); s++)
			printf(" ");
		
		f_row = factorial(row);
		for (int column = 0; column <= row; column++){
			f_column = factorial(column);
			f_row_column = factorial(row - column);
			printf("%3d ", f_row / (f_column * f_row_column));
		}
		printf("\n");
	}
	return 0;
}

int factorial(int n)
{
	int fac = 1;
	for (int i = 1; i <= n; i++)
		fac *= i;
	return fac;
}

