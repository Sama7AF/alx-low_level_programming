#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return pointer to newly allocate space
 * @str: char
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *pro;
	int i = 0, g;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	i++;
	pro = malloc(i * sizeof(char));
	if (pro == NULL)
		return (NULL);
	for (g = 0; g <= i; g++)
	{
		pro[g] = str[g];
	}
	return (pro);
}
