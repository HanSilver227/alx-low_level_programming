#include "main.h"

/**
 * print_last_digit - entry point
 *
 * @n: integer to represent
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (n % 10);
}
