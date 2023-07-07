#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
* *string_toupper - new
* @s: var
* Return: upper
*/

char *string_toupper(char *s)
{
	int a, b, c;

	for (a = 0; s[a] != '\0'; a++)
		;
	b = a;
	for (c = 0; c <= b; c++)
	{
		if (islower(s[c]))
		s[c] = toupper(s[c]);
		else
			s[c] = s[c];
	}
	return (0);
}
