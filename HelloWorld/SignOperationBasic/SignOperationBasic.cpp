#include <stdio.h>

main()
{
	int x = +4;
	int y = -2;

	printf("x + (y) = %d\n", x + (-y));
	printf("-x + (+y)= %d\n", -x + (+y));
}