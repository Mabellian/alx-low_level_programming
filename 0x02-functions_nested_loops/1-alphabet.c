#include "main.h"

/**
 * main - print the alphabets in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void);
{

	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c++;

	putchar('\n');

	return (0);
	}
}
