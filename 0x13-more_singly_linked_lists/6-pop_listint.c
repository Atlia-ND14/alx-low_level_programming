#include "lists.h"
/**
 * pop_listint - pops a node out
 * @head: linked list address
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = *head;
	i = tmp->n;
	*head = (*head)->next;
	free(tmp)

	return (i);
}
