#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

void main()
{
	printf("The minimum value between 50 and 20 is: %d\n", MIN(50, 20));
}
