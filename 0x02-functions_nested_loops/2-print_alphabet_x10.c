#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success);
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
