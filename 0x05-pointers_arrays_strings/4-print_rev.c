#include "main.h"

/**
 * print_rev - imprime on reversa
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int longi = 0;
	
	int 0;
	
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > o; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
