#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * at most n bytes from src
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: number of bytes to be concatenate
 *
 * Return: Pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
