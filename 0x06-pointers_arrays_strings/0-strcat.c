#include <stdio.h>
#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: pointer to designated string
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}

	dest[length] = '\0';
	return (dest);
}
