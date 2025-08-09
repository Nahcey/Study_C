/* 
 * Circle Circumference Calculator
 * 2025.08.04
 * by pyc
 */

#include <stdio.h>
int main(void)
{
	int radius;	//radius
	int diameter;	//diameter
	float pi;      	//pi

	radius = 0;
	pi = 3.14;

	printf("Input radius(integer value) : ");
	// input radius
	scanf("%d", &radius);
	printf("Radius : %d", radius);
	// diameter
	diameter = 2 * radius;
	printf("Diameter : %d",diameter);
	// Circle Circumference
	printf("Circumference : %f",diameter * pi);

	return 0;
}
