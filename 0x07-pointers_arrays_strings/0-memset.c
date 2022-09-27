#include "main.h"

/**
 * *_memset - fill the memory with the constant bytes
 * @b: constant bytes
 * @s: pointer to put contant
 * @n: max byte to use
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
