#include<stdio.h>
typedef struct grade{
	int grade[3];
	char p_f[3];
	int sum;
	float avg;
}grade;
int grade_proc(grade *);
int main(void)
{
	grade st = {{97,55,80}, {' ', ' ', ' '},0,0.0};
	
	if (grade_proc(&st))
		return 1;
	
	printf("MATH : %d (%c)\n", st.grade[0], st.p_f[0]);
	printf("ENG : %d (%c)\n", st.grade[1], st.p_f[1]);
	printf("SCI : %d (%c)\n", st.grade[2], st.p_f[2]);
	printf("SUM : %d\n", st.sum);
	printf("AVG : %.2f\n", st.avg);
	return 0;
}

int grade_proc(grade * st)
{
	if (st == NULL){
		printf("The parameter st is NULL\n");
		return -1;
	}
	st -> sum = st -> grade[0] + st -> grade[1] + st -> grade[2];
	st -> avg = st -> sum / 3.0;
	st -> p_f[0] = st -> grade[0] < 60 ? 'f' : 'p';
	st -> p_f[1] = st -> grade[1] < 60 ? 'f' : 'p';
	st -> p_f[2] = st -> grade[2] < 60 ? 'f' : 'p';
	return 0;
}
