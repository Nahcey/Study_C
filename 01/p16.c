#include <stdio.h>
int main(void)
{
	float num1,num2,sum;
	
	printf("input 2 nums : ");
	scanf("%f %f",&num1,&num2);
	sum = num1 + num2;
	printf("%0.2f + %0.2f = %0.2f\n",num1,num2,sum);
	return 0;
}
