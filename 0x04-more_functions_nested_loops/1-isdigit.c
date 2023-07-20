#include "main.h"

/**
 * _isdigit - checks if numbers are 0 - 9
 * @c: The character to be checked
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
