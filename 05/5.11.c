#include<stdio.h>
inline int square(int x)
{
	return x * x;
}

int main(void)
{
	int a, b = 5;
	a = square(b);
	return 0;
}
