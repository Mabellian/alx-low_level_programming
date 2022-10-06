#include "main.h"

/**
 * _strlen - return the string length
 * @s: string to check
 * Return: int length of the string
 */

int _strlen(char *s)
{

	int length = 0;

	while (s[length])
		length++;

	return (length);


}
