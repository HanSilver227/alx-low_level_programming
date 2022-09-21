#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Character to print
 *
 * Return: 1 (Success).
 * -1 is returned on error and set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
