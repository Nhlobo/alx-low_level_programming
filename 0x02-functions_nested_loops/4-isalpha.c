#include "main.h"
/**
 * @c: alphabet to check for 
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int __isalpha(int c)
{
return ((c <= 'z') || (c >= 'A' && c <= 'z'));
}
