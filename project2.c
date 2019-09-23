#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	float y;
	char z;
	short w;
	double d;
	
	printf("int byte : %d\n", sizeof (x));
	printf("float byte : %d\n", sizeof (y));
	printf("char byte : %d\n", sizeof (z));
	printf("short byte : %d\n", sizeof (w));
	printf("double byte : %d\n", sizeof (d));
	
	return 0;
}
