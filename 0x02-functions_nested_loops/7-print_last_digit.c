#include "main.h"

/**
 * print_last_digit - print the last digit
 * @c: integer
 *
 * Return: the value of the last digit
 */

int print_last_digit(int c)
{
	c = c % 10;

	if (c < 0)
	{
		c = c * -1;
	}

	_putchar('0' + c);
	return (c);
}
