#include <stdio.h>
/**
* main - print all arguments, followed by new line
*@argc:integer
*@argv:list
* Return:0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc - 1; i++)
		printf("%s\n", argv[i]);

	return (0);
}
