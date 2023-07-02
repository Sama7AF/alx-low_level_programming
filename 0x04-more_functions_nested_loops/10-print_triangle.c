#include "main.h"
/**
* print_triangle - Prints a triangle
* @size: sets the size of the triangle
*
* Return: nothing
*/

void print_triangle(int size)
{
	int n, m;

	if (size > 0)
		for (n = size; n > 0; n--)
		{
			for (m = 1; m <= size; m++)
				if (m >= n)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
