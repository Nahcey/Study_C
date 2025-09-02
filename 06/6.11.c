#include<stdio.h>

int main(void)
{
	int i, sum, max, min, SIZE;
	float average;

	printf("성적 개수를 입력하세요 : ");
	do {
		scanf("%d", &SIZE);
		if (SIZE < 0)
			printf("0보다 큰 값을 입력하세요 : ");
	}while (SIZE <= 0);
	int math[SIZE];

	// 성적 입력
	for (i = 0; i < SIZE; i++) {
		printf("%d 번쨰 수학 성적을 입력하세요 : ", i);
		scanf("%d", &math[i]);
	}

	// 평균 계산
	for (i = sum = 0; i < SIZE; i++)
		sum += math[i];
	average = sum / (float)SIZE;

	// 최대/최소 값
	max = min = math[0];
	for (i = 1; i < SIZE; i++)
		if (math[i] > max)
			max = math[i];
		else if (math[i] < min)
			min = math[i];

	// 출력
	printf("성적 평균 : %.2f\n", average);
	printf("최고 점값 ; %d\n", max);
	printf("최저 점수 : %d\n", min);

	return 0;
}
