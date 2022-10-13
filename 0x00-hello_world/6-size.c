#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main (void)
{
	
	printf("the size of an int: %lu, byte(s)\n", sizeof(int));
	printf("the size of a char: %lu, byte(s)\n", sizeof(char));
	printf("the sizze of a double: %lu, byte(s)\n", sizeof(double));
	printf("the size of a float: %lu, byte(s)\n", sizeof (float));
	printf("the size of a long int: %lu, byte(s)", sizeof(long int));
	printf("the size of a long, long int: %lu, byte(s)", sizeof(long long int));

	return (0);

}
