#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *_strncat - function to append with limmiting byte to terminate null
* @dest: var
* @src: var2
* @n: var3 *
* Return: pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
