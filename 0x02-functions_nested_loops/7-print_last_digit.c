#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @d: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int d)
{
	if (d < 0)
		d = d * -1;
	_putchar((d % 10) + '0');
	return (d % 10);
}
