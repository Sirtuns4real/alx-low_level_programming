#include "main.h"
#include <stdio.h>

/**
 * puts_half - function to print half of a string
 *
 * @str: provided string
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;
	for (i++; i < count; i++)
		_putchar(str[i]);

	_putchar('\n');
}


