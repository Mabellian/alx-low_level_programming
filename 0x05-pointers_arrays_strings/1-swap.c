#include "main.h"

/**
 * swap_int - swap the variables
 * @a: pointer for first value
 * @b: pointer for second value
 * Return: 0
 */

void swap_int(int *a, int *b)
{

	*a += *b;

	*b = *a - *b;

	*a = *a - *b;
}
