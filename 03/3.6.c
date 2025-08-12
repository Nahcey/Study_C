#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch = 71;
	int in = 'h';
	
	ch ++;
	in = toupper(in);
	printf("ch = %c or %d\n", ch, ch);
	printf("in = %d or %c\n", in, in);
	return 0;
}
