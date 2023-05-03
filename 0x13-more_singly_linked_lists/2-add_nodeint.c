#include "lists.h"

/**
 * add_nodeint - input
 * @head: input
 * @n: input
 *
 * Return: 0 if it falls
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

