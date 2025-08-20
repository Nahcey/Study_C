#include<stdio.h>
void convertM2HM(int);
extern int hours, minutes;
extern int hours, minutes;
int main(void)
{
	int inputM;
	printf("Input m : ");
	scanf("%d", &inputM);
	
	convertM2HM(inputM);
	printf("%dm = %dh %dm\n", inputM, hours, minutes);
	return 0;
}
