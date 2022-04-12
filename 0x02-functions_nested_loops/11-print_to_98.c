#include "main.h"

/**
 * print_to_98 - print natural numbers from n to 98
 *@n: given value
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i,j;

	for (i = n; i < 98; i++)
	{
		if (i == 1)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
		for (j = 2; j <= 49; j++)
		{
			int c=0;

			if (n % j == 0)
			{
				c=1;
				break;
			}
			if (c == 0)
			{
				_putchar(i);
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
