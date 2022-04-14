#include "main.h"

/**
 * _islower - check if lowercase char.
 * @c: entered parameter
 *
 * Return: 1 or 0.
 */

int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
