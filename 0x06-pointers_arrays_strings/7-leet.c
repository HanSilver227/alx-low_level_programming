#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: string
 * Return: string
 */

char *leet(char *str)
{
	char s[] = a4e3o0t7l1;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (str[i] == s[j])
			{
				str[i] = s[j + 1];
				break;
			}
		}
	}
	return (str);
}
