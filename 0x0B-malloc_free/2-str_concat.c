#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: char concatenate
 */
char *str_concat(char *s1, char *s2)
{
	char *pro;
	int i = 0, g = 0, cont, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[g])
	{
		g++;
	}
	k = i + g + 1;
	pro = malloc(k * sizeof(char));
	if (pro == NULL)
		return (NULL);
	for (cont = 0; cont < i; cont++)
	{
		pro[cont] = s1[cont];
	}
	for (cont = 0; cont <= g; cont++)
	{
		pro[cont + i] = s2[cont];
	}
	return (pro);
}
