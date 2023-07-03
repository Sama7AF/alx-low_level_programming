#include "main.h"
/**
 * _memcpy - function that copies memory area
 *@dest: the address of memory to print
 *@src: second value
 *@n: 3rd value
 *
 * Return: char with result of memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
	{
		dest[g] = src[g];
	}
	return (dest);
}
