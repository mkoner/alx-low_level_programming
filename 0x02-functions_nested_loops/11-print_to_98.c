#include "main.h"

/**
 * print_to_98 - print natural numbers from n to 98
 *@n: given value
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i,j;

	for (i = n; i <= 49; i++)
	{
		int c = 0;

		for (j =2; j <= 49; j++)
		{
			if (i % j == 0)
				c++;
		}
		if (c > 2)
			printf("%d, ",i);
		c = 0;
	}
}
