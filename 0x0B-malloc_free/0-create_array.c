#include <stdlib.h>
#include "main.h"

/**
* create_array - function create an array of chars
* @size: number of elements
* @c: size of 1 unit
*
* Return: char
*/
char *create_array(unsigned int size, char c)
{
	char *pro;
	unsigned int i;

	if (size == 0)
		return (NULL);
	pro = malloc(size * sizeof(char));
	if (pro == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		pro[i] = c;
	}
	return (pro);
}
