#include <stdio.h>

#define TOTAL_SIZE 20

int main(void)
{
	int data[TOTAL_SIZE];
	int total = 0, i, j, product;

	for (i = 0; i < TOTAL_SIZE; i++)
	{
		product = i * TOTAL_SIZE;

		data[i] = product;

		total = total + product;
	}

	float avg;

	avg = (total / TOTAL_SIZE);
	printf("Average is:  %f\n", avg);

	for (j = TOTAL_SIZE; j > 0; j--)
	{
		printf("The Element at %d ", j);
		printf("is:  %d\n", data[j]);
	}


	return (0);
}
