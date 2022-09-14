#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 * Description: loop 10 times
 * followed by new line
 *
 * Return: nill
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');
}
