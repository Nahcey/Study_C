#include<stdio.h>
int square(int);

int main(void){
	int n = 10, s;

	s = square(n);
	
	printf("%d^2 = %d\n", n ,s);
	return 0;
}

int square(int n){
	n = n * n;
	return n;
}	
