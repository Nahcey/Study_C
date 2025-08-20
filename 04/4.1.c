#include<stdio.h>
int main(void)
{
	int math = 0, english = 0, fail = 0;
	
	printf("math score(int) : ");
	scanf("%d", &math);
	
	printf("eng score(int) : ");
	scanf("%d", &english);
	
	// || short eval
	math >= 60 || fail++;
	english >= 60 || fail++;
	
	// && short eval
	fail && printf("number of subjects filed : %d\n",fail);

	return 0;
}
