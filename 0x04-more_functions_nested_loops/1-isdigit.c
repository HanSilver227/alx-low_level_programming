/**
 * _isdigit - entry point
 *
 * @c: character to determine
 *
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
