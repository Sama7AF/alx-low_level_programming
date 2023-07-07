#include "main.h"
/**
* _memset - function that fills memory with a constant byte
*@s: first value
*@b: second value
*@n: thirth value
*
* Return: char with result of memset
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
	{
		s[g] = b;
	}
	return (s);
}
