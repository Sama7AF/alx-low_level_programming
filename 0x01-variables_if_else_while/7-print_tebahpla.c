#include <stdio.h>
/**
* main - Prints the alphabet in lowercasein reverse
*followed by a new line.
*
* Return: Always 0.
*/
int main(void)
{
	char n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
