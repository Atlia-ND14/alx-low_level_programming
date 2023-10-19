#include "list.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked
 * @h: head data
 * Return: always 0
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
