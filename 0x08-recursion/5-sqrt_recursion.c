#include "main.h"
/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: integer to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
