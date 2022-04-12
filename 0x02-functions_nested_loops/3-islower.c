#include "main.h"

 /* * _islower - checks for lowercase char.
 *
 * Return: Always 0.
 */
int _islower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
