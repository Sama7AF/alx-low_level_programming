#include "main.h"
/**
* print_diagonal- a function that draws  a diagonal  line in the terminal
* @n: input number of times to print '\'
* Return:  a diagonal  line
*/
void print_diagonal(int n)
	{
	int ln, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ln = 1; ln <= n; ln++)
		{
			for (d = 1; d < ln; d++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
