#include <stdio.h>

/**
 * main - Printing numbers form 0-9 with commas and space between them.
 *Description: using the main function
 *this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
