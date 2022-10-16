#include <stdio.h>

/**
 * main - prints numbers from 0 to 9 separated by a coma followed by a space
 *
 * Return: Always 0 (success)
 *
 */

int main(void)

{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);

}
