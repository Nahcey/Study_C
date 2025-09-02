#include <stdio.h>
#define N 10
int main(void)
{
	int id = 0;
	char name[N] = "";
	int age = 0;

	printf("Input id : ");
	scanf("%d",&id);
	printf("Input name : ");
	scanf("%s",name);
	printf("Input age : ");
	scanf("%d", &age);

	printf("ID : %d\n", id);
	printf("Name : %s\n", name);
	printf("Age : %d\n", age);

	return 0;
}
