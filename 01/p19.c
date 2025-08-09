#include <stdio.h>
int main()
{
	int num1;
	float num2;
	
	printf("input int, float : ");
	scanf("%d %f",&num1,&num2);
	printf("%d * %0.2f = %0.2f\n",num1,num2,num1 * num2);
	return 0;
}
