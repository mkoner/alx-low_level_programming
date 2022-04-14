#include "main.h"

/**
 * print_most_numbers - prints numers from 0 to 9
 *
 * Return: Always numbers.
 */

void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if(i == 2 || i == 4)
			continue;
		_putchar(i);
		i++;
	}
}
