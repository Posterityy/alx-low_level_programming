#include "main.h"
#include <stdio>

/**
 * print_array - prints array
 * @a: pointer of array
 * @n: how many times to prints
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
