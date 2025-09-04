#include<stdio.h>

void convertM2HM(int min, int *h, int *m);

int main(void)
{
	int inputM, hours, minutes;

	printf("분을 입력하세요 : ");
	scanf("%d", &inputM);

	convertM2HM(inputM, &hours, &minutes);
	printf("%d분은 %d시간 %d분입니다.\n", inputM, hours, minutes);
	return 0;
}

void convertM2HM(int min, int *h, int *m)
{
	*h = min / 60;
	*m = min % 60;
	return;
}
