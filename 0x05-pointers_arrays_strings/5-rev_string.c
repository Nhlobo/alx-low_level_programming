#include "main.h"

/**
 * rev_strinig - prints a string in reverse
 * poiter poiting to the string
 * Return: 0
 */

void rev_string(char *s)
{
	char rev = s[0];
	
	int counter = 0;
	
	int 1;

	while (s[counter] != '\0')
	counter++;

	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
