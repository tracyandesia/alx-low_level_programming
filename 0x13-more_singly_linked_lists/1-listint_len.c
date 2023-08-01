#include "lists.h"

/**
 * listint_len - returns the number of elements in a
 * linked listint_t list
 * @g: pointer to head of list
 * Return: number of elements
 */
size_t listint_len(const listint_t *g)
{
	register size_t count = 0;

	while (g)
	{
		g = g->next;
		count++;
	}
	return (count);
}
