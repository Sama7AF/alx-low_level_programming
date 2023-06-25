#include <stdio.h>
/**
* main - Prints the alphabet in lowercase, followed by a new line.
*
* Return: Always 0.
*/
int main(void)
{
	char n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
