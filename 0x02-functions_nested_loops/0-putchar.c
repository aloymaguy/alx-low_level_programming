#include "_putcher.h"

/**
*main - function to print
*
* Return: 0
*/
int main(void)
{
	char _putcher[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	unasigned int c;

	for (c = 0; c < sizeof(_putcher); c++)
	{
		_putchar(_putchar[c]);
	}
_putchar('\n');
return (0);
}
