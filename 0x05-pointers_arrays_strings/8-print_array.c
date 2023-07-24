#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line
 * @a: This is the input array
 * @n: This is the lenght of the array
 */

void print_array(int *a, int n)
{
	int idex_of_array;

	for (idex_of_array = 0; idex_of_array < n; idex_of_array++)
	{
		printf("%d", a[idex_of_array]);
		if (idex_of_array != (n - 1))
		{
			printf(",");
		}
	}
	_putchar('\n');
}
