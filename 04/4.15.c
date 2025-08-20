#include <stdio.h>
int main(void)
{
	int math;
	
	printf("Input math score : ");
	scanf("%d",&math);
	switch (math / 10) {
	case 10:
		printf("math : A\n");
		break;
	case 9:
		printf("math : A\n");
		break;
	case 8:
		printf("math : B\n");
		break;
	case 7:
		printf("math : C\n");
		break;
	defalut:
		printf("math : F\n");
	}
	
	return 0;
}
