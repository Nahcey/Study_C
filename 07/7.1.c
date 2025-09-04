#include <stdio.h>
int main(void)
{
	int i = 2;
	int *p  = NULL;

	p = &i;
	printf("i 값 : %d\n", i);
	printf("i 주소 : %p\n", &i);
	printf("p 값 : %p\n", p);
	printf("*p 값 : %d\n", *p);

	*p = *p * *p;
	printf("i 값 : %d\n", i);
        printf("i 주소 : %p\n", &i);
        printf("p 값 : %p\n", p);
        printf("*p 값 : %d\n", *p);

	return 0;
}
