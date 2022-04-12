#include "main.h"

/**
 * _abs - return the absolute value of an integer.
 * @n: given number
 * Return: Always 1 is positiv, -1 if negative or 0
 */

int _abs(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
