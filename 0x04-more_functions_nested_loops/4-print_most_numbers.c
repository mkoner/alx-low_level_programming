#include "main.h"

/**
 * print_most_numbers - prints numers from 0 to 9
 *
 * Return: Always numbers.
 */

void print_most_numbers(void)
{
	int i = 48;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar(10);
}
