#include <stdio.h>
#include "main.h"

/**
* _strlen - a function to print the length of a string
* @s: string to be supplied
* Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
