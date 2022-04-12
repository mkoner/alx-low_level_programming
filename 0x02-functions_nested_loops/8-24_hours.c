#include "main.h"
/**
 * jack_bauer - print minutes of the day
 * 
 * Return: void.
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; j <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(i);
			_putchar('a');
			_putchar(':');
			_putchar(j);
			_putchar('a');
			_putchar('\n');
		}
	}
}
