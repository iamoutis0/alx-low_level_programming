#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @i: int value to make absolute
 *
 * Return: absolute value of i.
 */

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
