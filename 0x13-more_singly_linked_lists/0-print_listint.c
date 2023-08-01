#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of elements
 */
size_t print_listint(const listint_t *g)
{
	register size_t count = 0;

	while (g)
	{
		printf("%i\n", g->n);
		g = g->next;
		count++;
	}
	return (count);
}
