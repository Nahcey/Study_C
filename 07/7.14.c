#include<stdio.h>
#include<math.h>
int main(void)
{
	typedef double (*func)(double);
	func x[3] = {sin,cos,tan};
	char *name[3] = {"sin", "cos", "tan"};
	double rad = 3.141592 / 4.0;

	for (int i = 0; i < 3; i++)
		printf("%s(%.3f) : %.3f\n", name[i],rad,x[i](rad));
	return 0;
}
