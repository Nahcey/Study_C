#include<stdio.h>
typedef union two_numbers {
	int in;
	double db;
}number;

int main()
{
	number n;
	n.in = 1024;
	printf("in : %5d db: %8.3e\n", n.in,n.db);
	n.db = 1024.0;
	printf("in : %5d db: %8.3e\n", n.in,n.db);
	return 0;
}
