#include "main.h"
/**
 * print_line - draws a line
 * @n: size of the line
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;
	for (i = 0; i < n; i++)
		_charput(45);
	charput(10);
}
