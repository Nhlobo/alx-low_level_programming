#include "main.h"
/**
 * __isalpha - Checks for alphabetic order
 *
 * @c: alphabet to check for
 * Return: 1 if c is a letter, 0 otherwise
 */
int __isalpha(int c)
{
return ((c <= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
