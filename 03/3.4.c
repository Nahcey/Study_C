#include <stdio.h>

int main(void)
{
	long long large_int, veryLarge_int;
	large_int = 9000000000000000000LL; //900kyung
	veryLarge_int = large_int + large_int;
	printf("%lld + %lld = %lld\n", large_int, large_int, veryLarge_int);
	return 0;
}
