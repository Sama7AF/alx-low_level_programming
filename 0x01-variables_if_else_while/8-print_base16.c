#include <stdio.h>
/**
* main - a program that prints all the numbers of base 16 in lowercase
*followed by a new line.
*
* Return: Always 0.
*/
int main(void)
{
	int(n);
	int(m);
	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
