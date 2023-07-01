#include "main.h"
/**
*print_most_numbers - a function that prints the numbers, from 0 to 9
*
* Return: 0-9 except 2 and 4- followed by newline
*/
void print_most_numbers(void)
{
	char (n);

	for (n = 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
			continue;
		else
			_putchar(n);
	}
	_putchar('\n');
}
