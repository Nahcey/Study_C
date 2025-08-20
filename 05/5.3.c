#include<stdio.h>
void change(int);
int main(void)
{
	int n = 3;
	change(n);
	printf("n : %d\n", n);
	return 0;
}
void change(int x)
{
	x = 100;
	return;
}
