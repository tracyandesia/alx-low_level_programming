#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

#define SUCCESS 1
#define FAILURE -1

/**
 * struct listint_s - singly linked list
 * @next: points to the next node
 *  @n: integer
 *   Description: singly linked list node structure
 *   for alx project
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *g);


#endif /* LISTS_H */
