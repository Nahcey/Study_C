#include<stdio.h>
typedef struct name_grade{
	char name[8];
	int grade;
} name_grade;
int main(void)
{
	name_grade st, *st_p = &st;

	st = (name_grade) {"James", 98};

	printf("%s : %d점\n", st_p -> name, (*st_p).grade);
	return 0;
}
