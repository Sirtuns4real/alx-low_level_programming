#include "main.h"

/**
 * main - print_alphabet  entry point
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');

}
