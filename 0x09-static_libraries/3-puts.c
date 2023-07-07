#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - new
 * @str: var
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
