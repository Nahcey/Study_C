#include <stdio.h>
int main(void)
{
	printf("'\\a' is alert and '\\b' is backspace.\n");
	printf("%c%c%c : ", '\'','a', '\'');
	printf("%c", '\a');
	printf("I like%c%c%cove \"C\".\n", '\b', '\b', '\b');
	return 0;
}
