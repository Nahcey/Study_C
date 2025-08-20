#include<stdio.h>

int hours, minutes;
void convertM2HM(int);

int main(void)
{
	int inputM;
	
	printf("Input m : ");
	scanf("%d",&inputM);
	
	convertM2HM(inputM);
	printf("%dm = %dh %dm\n", inputM,hours,minutes);
	return 0;
}

void convertM2HM(int min)
{
	hours = min / 60;
	minutes = min % 60;
	return;
}
