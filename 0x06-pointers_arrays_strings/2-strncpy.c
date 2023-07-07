#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *_strncpy - function
* @dest: var
* @src: var2
* @n: var3 *
* Return: pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
