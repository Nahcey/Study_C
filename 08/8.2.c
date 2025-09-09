#include<stdio.h>
struct name_grade{
	char name[8];
	int grade;
};
struct subject {
	char name[8];
	struct name_grade student1;
	struct name_grade student2;
	struct name_grade student3;
	float avg;
};
int main(void)
{
	struct subject math = 
	{"MATH", {"James",90},{"Mark",44},{"Jane",76}};

	math.avg = (math.student1.grade + math.student2.grade 
			+ math.student3.grade) / 3.0;
	printf("%s : %d 점 \n", math.student1.name, math.student1.grade);
	printf("%s : %d 점 \n", math.student2.name, math.student2.grade);
	printf("%s : %d 점 \n", math.student3.name, math.student3.grade);
	printf("%s 평균 : %.2f\n", math.name, math.avg);
	return 0;
}
