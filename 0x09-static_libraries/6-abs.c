#include "main.h"
/**
 * _abs - calculate the absolute value of the number from zero.
 * @n: the integer to be converted.
 * Return: absolute value of the input number.
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
