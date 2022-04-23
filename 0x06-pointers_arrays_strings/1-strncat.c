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
		
		for(i = 0; dest[i] != '\0'; i++)
		for(j = 0; j < n && src[j] != '\0'; j++)
			dest[i + j] = src[j];
		dest[i + j] = '\0';
		return (dest);
}
