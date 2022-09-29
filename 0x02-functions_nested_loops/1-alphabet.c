#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case, followed by a new line.
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
