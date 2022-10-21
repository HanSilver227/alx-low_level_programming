#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"

/**
 * add_node - adds a new node
 * @head: address of head
 * @str: string to work with
 * Return: returns address of a new node or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
