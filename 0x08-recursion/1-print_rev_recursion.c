#include "main.h"

/**
 * print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev_recursion(char *s)
{
  if (s)
  {
    print_rev_recursion(s + 1);
    putchar(s);
  }
}
