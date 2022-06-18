#include <stdio.h>

#define AREA(l , b) (l * b)

int main(void)
{
	int l1 = 10, l2 = 5, area;
	area = AREA(l1, l2);

	printf("Area of rectangle is : %d \n", area);

	return (0);
}
