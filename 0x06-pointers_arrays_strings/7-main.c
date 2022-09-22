#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Caapitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
