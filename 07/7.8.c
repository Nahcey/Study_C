#include<stdio.h>
int main(int argc, char *argv[])
{
	int i = 0;
	printf("인자의 개수 : %d\n", argc);
	while (argv[i] != NULL){
		printf("argv[%1d] : %s\n", i, argv[i]);
		i++;
	}
	return 0;
}
