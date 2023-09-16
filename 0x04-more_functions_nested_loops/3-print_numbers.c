#include "main.h"

/**
 * print_numbers - print 0 - 9
 *		only using _putchar twice
 * Return: the number since 0 up to 9
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
