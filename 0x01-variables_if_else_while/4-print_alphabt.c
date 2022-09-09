#include <stdio.h>
/**
 * main - Entry block
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets == 'q' && alphabets == 'e')
			continue
		else
			putchar(alphabets);
	putchar('\n');
	return (0);
}
