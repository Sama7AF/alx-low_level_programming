#include "main.h"
/**
* _strchr - function that locates a character in a string
*@s: 1st value -char
*@c: 2nd value - char
*
* Return: char with result
*/
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
