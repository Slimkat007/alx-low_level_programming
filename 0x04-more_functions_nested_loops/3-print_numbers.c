#include "main.h"

/**
* print_numbers -  prints numbers from 0 up to 9
* Return: All numbers fromm 0 to 9.
*/

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + 1);
	}
		_putchar('\n');
}
