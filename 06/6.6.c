#include<stdio.h>
#define SIZE 10

void array_input(int, int []);
int array_sum(int, int []);
int array_max(int, int []);
int array_min(int, int []);
	
int main(void)
{
	int math[SIZE];
	int i, sum, max, min;
	float average;
	
	array_input(SIZE,math);	
	sum = array_sum(SIZE, math);	
	average = sum / (float)SIZE;
	max = array_max(SIZE, math);
	min = array_min(SIZE, math);
	
	printf("Avg : %.2f\n", average);
	printf("max : %d\n", max);
	printf("min : %d\n", min);
	
	return 0;
}
	
void array_input(int size, int array[])
{
	for (int i = 0; i < size; i++){
		printf("Input %d score : ", i);
		scanf("%d",&array[i]);
	}
	
}
int array_sum(int size, int array[])
{
	int sum, i;
	for (sum = 0, i = 0; i < size; i++)
		sum += array[i];
	return sum;
}

int array_max(int size, int array[])
{
	int max;
	max = array[0];
	for (int i = 1; i < size; i++)
		if (array[i] > max)
			max = array[i];
	return 0;
}

int array_min(int size, int array[])
{
	int min;
	min = array[0];
	for (int i = 1; i < size; i++)
		if (array[i] < min)
			min = array[i];
	return 0;
}
