#include <stdio.h>

int main(void)
{
	unsigned int SIZE = 20;
	int n[SIZE];
	int position, index;

	for (position = 0; position < SIZE; position++)
	{
		n[position] = position + 5;
	}

	for (index = 0; index < SIZE; index++)
	{
		printf("The Element at index %d is", index);
		printf("%d\n", n[index]);
	}

	return (0);
}
