#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *_strchr - locate function
* @s: string
* @c: char
* Return: s
*/

char *_strchr(char *s, char c)
{
	if (strchr(s, c))
		return (strchr(s, c));
	else
		return (0);
}
