#include <stdio.h>

#define TOTAL-SIZE 20;

int main(void)
{
	int date[TOTAL-SIZE];
	int total = 0, i, j, product;

	for (i = 0; i < TOTAL-SIZE; i++)
	{
		product = i * TOTAL-SIZE;
		date[i] = product;
		total = total + product;
	}

	avg = (total/TOTAL-SIZE);
	printf("Average is %f\n", avg);

	return (0);
}
