#include <stdio.h>
#include <stdlib.h>

/**
 * main - programme multiplies two numbers.
 * @argc: integer
 * @argv: list
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int i, g;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		g = 1;

		for (i = 1; i < 3; i++)
			g *= atoi(argv[i]);

		printf("%d\n", g);
	}

	return (0);
}
