#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* *_strcat - new
* @dest: variable
* @src: variable2
* Return: pointer
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
