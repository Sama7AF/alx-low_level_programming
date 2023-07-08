#include <stdio.h>
/**
* main - print number of arguments, followed by new line
*@argc:integer
*@argv:list
* Return:0
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[argc - 1]);
	return (0);
}
