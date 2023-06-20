#include "main.h"
/**
* print_last_digit- prints the last digit of a numer.
* @s: digit to find the last place of.
* Return: The last digit.
*/
int print_last_digit(int s)
{
	int last_digit = s % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
