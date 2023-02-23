#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of lines to draw
 * Returm: empty
*/

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
		putchar(95);
	}
	putchar('\n');
	}
}
