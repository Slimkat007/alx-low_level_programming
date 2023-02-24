#include<stdio.h>
#include<math.h>

/**
 * main - prints prime factors of the given number
 *Return: Always 0 success
*/

int main(void)
{
	long x, maxf;
	long number = 612852475143
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
		maxf = number / x;
	}
	}
	printf("dln", maxf)
	return (0);
}
