#include <stdio>

/**
 * checks if letter is capital
 * @x: the nunber to be checked
 * Return 1 gor upperletter or 0 for any else
*/

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
