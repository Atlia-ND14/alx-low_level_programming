#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: head
 * @str: string
 * Return: alwys 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	size_t len;
	char *new_str;

	if (head == NULL || str == NULL)
		return (NULL);
	len = strlen(str);
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}
	strcpy(new_str, str);
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (new_node);
}
