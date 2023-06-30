#include <stdio.h>
/**
* main - Prints the alphabet in lowercase except q and e
*followed by a new line.
*
* Return: Always 0.
*/
int main(void)
{
	char n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{	n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
