#include "main.h"

/**
 * print_alphabet_x10- print 10 tomes the alphabet.
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	int j = 1;

	while (j <= 10)
	{
		int i = 97;
		while (i <= 122)
		{
		_putchar(i);
		i++;
		}
	_putchar('\n');
	j++;
	}
