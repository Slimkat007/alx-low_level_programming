#include<stdio.h>

/**
 * swap_int - swapss two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
