#include "main.h"
/**
* print_last_digit- prints the last digit of a numer.
* @s: digit to find the last place of.
* Return: The last digit.
*/
int print_last_digit(int s)
{
	if (s < 0)
		s = s * -1;
	_putchar((s % 10) + '0');
	return (s % 10);
}
