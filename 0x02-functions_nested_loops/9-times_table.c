#include "main.h"

/**
 * times_table-check description
 * Description: it prints the 9 times table, starting with 0
 * return (0)
 */
void times_table(void)
{
int L, J, n;
for (int i = 0; i <= 9; i++);
	{
		for (int j = 0; j <= 9; j++)
		{
			n = i * j;
			if ((n / 10) == 0)
			{
				_putchar('0' + n);
			}
			else
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
