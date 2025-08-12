#include <stdio.h>
int main(void)
{
	double x = 123.45123451234512345;
	double y = 123.45123451234512300;
	
	printf("%.17f %.17f\n", x, y);
	return 0;
}
