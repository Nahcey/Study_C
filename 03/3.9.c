#include <stdio.h>
int main(void)
{
	printf("** basic datatype size **\n");
	printf("       char:%3d byte \n", sizeof(char));
	printf("      short:%3d bytes\n", sizeof(short));
	printf("        int:%3d bytes\n", sizeof(int));
	printf("       long:%3d bytes\n", sizeof(long));
	printf("  long long:%3d bytes\n", sizeof(long long));
	printf("   unsigned:%3d bytes\n", sizeof(unsigned));
	printf("      float:%3d bytes\n", sizeof(float));
	printf("     double:%3d bytes\n", sizeof(double));
	printf("long double:%3d bytes\n", sizeof(long double));
	return 0;
}
