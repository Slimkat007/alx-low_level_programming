#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
*/

void print_alphabet_x10(void)
{
	int ten;
	char letter;

	for (ten = 1; ten <= 10; ten++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		-putchar('\n');
	}
