#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 56; i++)
		for (j = i + 1; j < 57; j++)
			for (k = j+1; k < 58; k++)
			{
			putchar(i);
			putchar(j);
			if (i == 55 && j == 56 && k== 57)
				continue;
			{
			putchar(44);
			putchar(32);
			}
		}
	putchar(10);
	return (0);
}
