#include <stdio.h>

int main(void)
{
	int height = 175, int_tmp;
	float weight = 70.0,bmi, float_tmp;
	double bmi_double;
	
	int_tmp = height * height;
	float_tmp = int_tmp * 0.0001;
	bmi = weight / float_tmp;
	printf("bmi : %.2f\n", bmi);
	
	return 0;
}
