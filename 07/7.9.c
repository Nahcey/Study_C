#include<stdio.h>

int main(void)
{
	int in, inarray[10];
	double db;

	printf("_Alignof(int) = %d\n", _Alignof(int));
	printf("_Alignof(in) = %d\n", _Alignof(in));
	printf("_Alignof(inarray) = %d\n", _Alignof(inarray));
	printf("_Alignof(char) = %d\n", _Alignof(char));
	printf("_Alignof(db) = %d\n", _Alignof(db));

	return 0;
}
