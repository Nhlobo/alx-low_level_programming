#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>



/**
  * print_numbers - print numbers
  * @s: separator
  * @n: number of integer to pass
  */



void print_numbers(const char *s, const unsigned int n, ...)
{
	unsigned int i;
	va_list op;

	va_start(op, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(op, int));
		if (i < (n - 1) && s != NULL)
			printf("%s", s);
	}
	printf("\n");
	va_end(op);
}


#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>



/**
  * print_strings - print strings
  * @s: separator
  * @n: the number of string argument
  */



void print_strings(const char *s, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list op;

	va_start(op, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(op, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < (n - 1) && s != NULL)
			printf("%s", s);
	}
	printf("\n");
	va_end(op);
}
