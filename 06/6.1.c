#include<stdio.h>

int main(void)
{
	int math[10];
	int i, sum, max, min;
	float average;

	
	for (i = 0; i < 10; i++){
		printf("Input %d math score : ", i);
		scanf("%d",&math[i]);
	}
	
	
	for (i = sum = 0; i < 10; i++)
		sum += math[i];
	average = sum / 10.0;

	
	max = min = math[0];
	for (i = 1; i < 10; i++)
		if (math[i] > max)
			max = math[i];
		else if (math[i] < min)
			min = math[i];


	printf("average : %.2f\n", average);
	printf("max : %d\n", max);
	printf("min : %d\n", min);
	
	return 0;
}	 
