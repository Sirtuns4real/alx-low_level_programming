
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@Sirtuns4real 
Delany1
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x07-pointers_arrays_strings/4-strpbrk.c
@Delany1
Delany1 4-strpbrk.c
Latest commit 962b3b0 on Sep 26
 History
 1 contributor
32 lines (25 sloc)  443 Bytes

#include "main.h"
#define NULL 0

/**
* _strpbrk - return pointer to byte in s that matches a byte in accept
* @s: string to search
* @accept: target matches
* Return: pointer to index of string at first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x] != '\0')
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				s = &s[x];
				return (s);
			}

		}

	x++;
	}

	return (NULL);

}
