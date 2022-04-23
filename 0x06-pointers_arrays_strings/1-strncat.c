#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of chars of src to add
 * Return: void
*/

char *_strncat(char *dest, char *src, int n)
{
	        int i = 0, j = 0;
		
		while(dest[i] != '\0')
			i++;
		while(j != n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		return (dest);
}
