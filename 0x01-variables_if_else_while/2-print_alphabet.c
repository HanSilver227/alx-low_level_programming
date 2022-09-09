#include <stdio.h>
/**
 * main - prints alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
		putchar('\n');
		return (0);
}
