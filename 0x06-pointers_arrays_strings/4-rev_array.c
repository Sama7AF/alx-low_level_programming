#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* reverse_array - new
* @a: variable
* @n: variable2
*/

void reverse_array(int *a, int n)
{
	int b, c, f[n];

	for (b = n; b >= 0; b--)
	{
		c = n - b;
		f[c] = a[n];
	};
	a = f;
}
