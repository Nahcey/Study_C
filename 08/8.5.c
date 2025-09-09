#include<stdio.h>
#define N 5
typedef struct name_grade{
	char name[8];
	int grade;
} name_grade;
int main(void)
{
	int sum = 0;
	float avg = 0.0;
	name_grade st_a[N] = {{"Jane", 77}, {"Sam", 87},
		{"Tom", 65},{"Eve",90}, {"James",98}};
	printf(" 이름    점수\n");
	for (int i = 0; i < N; i++){
		printf("%-10s %3d\n", st_a[i].name, st_a[i].grade);
		sum += st_a[i].grade;
	}

	avg = (float) sum / N;

	printf("성적 평균 : %.2f\n", avg);
	return 0;
}
