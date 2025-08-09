#include <stdio.h>
int main(void)
{
	int a;
	int b;
	float c;
	a = 0;
	c = 3.14;
	printf("Input a(integer value) : ");
	scanf("%d", &a);
	printf("Radius : %d\n",a);
	b = 2 * a;
	printf("Diameter : %d\n",b);
	printf("Circumferece : %2f\n", b * c);
	return 0;
}
