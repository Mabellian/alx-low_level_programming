#include <stdio.h>

/**
 * main - lower case alphabeths a-z
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
