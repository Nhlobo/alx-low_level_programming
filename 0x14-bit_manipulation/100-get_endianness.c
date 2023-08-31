#include "main.h"
#include <stdio.h>
/**
* get_endianness - function that returns processor endianness
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
int k;
char *endian;

k = 1;
endian = (char *)&k;
return ((int)endian[0]);
}
