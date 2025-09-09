#include<stdio.h>
#include<string.h>
int main(void)
{
	struct name_grade {
		char name[8];
		int grade;
	};
	struct name_grade st1, st2;

	strcpy(st1.name, "James");
	st1.grade = 98;
	st2 = st1;
	printf("%s : %d점\n", st2.name, st2.grade);

	return 0;
}
