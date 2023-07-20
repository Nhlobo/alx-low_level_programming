#include "main.h"

/**
 * print_diagonal - draws a digonal lines according to parameter
 * @n: The number of times to print digonal lines
 * Return: empty
 */

void print_diagonal(int n)

{
	int x, y;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; x < n; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
