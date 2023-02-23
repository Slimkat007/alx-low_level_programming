#include "main.h"

/**
*more_numbers - print 10 times the numbers from 0 up to 12
* Return: 1p times of the numbers since 0 to 12
*/

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 12; y++)
		{
			if (y > 0)
			{
				putchar((y / 10) + '0');
			}
			putchar((y % 10) + '0');
		}
		putchar('\n');
	}
}
