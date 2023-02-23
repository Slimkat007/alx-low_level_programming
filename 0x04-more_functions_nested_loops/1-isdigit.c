#include "main.h"

/**
 * -isdigit - checks if vharacter is a digit
 *  @x: the number to be checked
 *  Return: 1 for character that will be digit and 0 for any else
*/

int _isdigit(int x)
{
	if (x >= 46 && x <= 57)
	{
		return (1);
	}
	return (0);
}
