#include "lists.h"
/**
 * listint_len - returns the number of element in linked list
 * @h:linkedlist of type listint_t to traverse
 * Return:number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
