#include<stdio.h>
#define SIZE 10

int main(void)
{
	int math[SIZE];
	int i, sum, max, min;
	float average;

	
	for (i = 0; i < SIZE; i++){
		printf("Input %d math score : ", i);
		scanf("%d",&math[i]);
	}
	
	
	for (i = sum = 0; i < SIZE; i++)
		sum += math[i];
	average = sum / (float)SIZE;

	
	max = min = math[0];
	for (i = 1; i < SIZE; i++)
		if (math[i] > max)
			max = math[i];
		else if (math[i] < min)
			min = math[i];


	printf("average : %.2f\n", average);
	printf("max : %d\n", max);
	printf("min : %d\n", min);
	
	return 0;
}	 
