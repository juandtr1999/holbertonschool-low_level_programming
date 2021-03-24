#include "lists.h"
/**
 * print_listint - Prints a list
 * @h: header
 * Return: variable
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
