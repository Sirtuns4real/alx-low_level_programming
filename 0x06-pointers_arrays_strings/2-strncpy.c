#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: Pointer to a character that will be changed
 * @src: Pointer to a character that will be changed
 * @n: value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
