#include<stdio.h>

int factorial(int);
void pascal_number(int);

int main(void)
{
	int height;

	printf("h (1 ~ 13) : ");
	scanf("%d",&height);
	
	for (int row = 0; row < height; row++){
		
		for (int s = 0; s <= (height - row - 2); s++)
			printf(" ");
		
		pascal_number(row);
		printf("\n");
	}
	return 0;
}


void pascal_number(int row)
{
	int f_row, f_column, f_row_column;
	
	f_row = factorial(row);
	for (int column = 0; column <= row; column++){
		f_column = factorial(column);
		f_row_column = factorial(row - column);
		printf("%3d ", f_row / (f_column * f_row_column));
	}
	return;
}


int factorial(int n)
{
	int fac = 1;
	for (int i = 1; i <= n; i++)
		fac *= i;
	return fac;
}

