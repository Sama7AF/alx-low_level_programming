#include <stdio.h>
/**
* main - Prints  the alphabet in lowercase, and then in uppercase
*followed by a new line.
*
* Return: Always 0.
*/
int main(void)
{
	char n = 97;
	char m = 65;

	while (n <= 122)
	{
	putchar(n);
	n++;
	}
	while (m <= 90)
	{
	putchar(m);
	m++;
	}
	putchar('\n');
	return (0);
}
