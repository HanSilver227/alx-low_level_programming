#include "main.h"
/**
 * print_square - entry point
 *
 * @size: integer to set size
 */

void print_square(int size)
{
int i;
int j;

if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
