#include "main.h"
/**
 * _isupper - entry point
 * @c: character to represent
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
