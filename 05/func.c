#include<stdio.h>
void convertM2HM(int min)
{
	extern int hours, minutes;
	hours  = min / 60;
	minutes = min % 60;
	return ;
}
int hours, minutes;
