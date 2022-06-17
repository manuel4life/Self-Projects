#include <stdio.h>

int main(void)
{
	float salary[10];
	
	salary[0] = 200.23;
	salary[1] = 190.87;
	salary[2] = 2009.40;
	salary[3] = 90098;
	salary[4] = 90887;
	salary[5] = 654378;
	salary[6] = 546342;
	salary[7] = 645343;
	salary[8] = 3224;
	salary[9] = 45322;

	printf("Element at %d is %0.2f\n", 0, salary[0]);
	printf("Element at %d is %0.2f\n", 1, salary[1]);
	printf("Element at %d is %0.2f\n", 2, salary[2]);
	printf("Element at %d is %0.2f\n", 3, salary[3]);
	printf("Element at %d is %0.2f\n", 4, salary[4]);
	printf("Element at %d is %0.2f\n", 5, salary[5]);
	printf("Element at %d is %0.2f\n", 6, salary[6]);
	printf("Element at %d is %0.2f\n", 7, salary[7]);
	printf("Element at %d is %0.2f\n", 8, salary[8]);
	printf("Element at %d is %0.2f\n", 9, salary[9]);
	

	return (0);
}
