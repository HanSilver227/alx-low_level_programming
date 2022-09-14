#include "main.h"
/**
 * print_sign - entry point
 *
 * @n: character to represent
 *
 * Return: 1 if positive, 0 if zero, -1 if negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
