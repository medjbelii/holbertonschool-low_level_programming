#include "lists.h"
/**
* delete_nodeint_at_index - print
*
* @head: print
* @index: print
*
* Return: print
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *X;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	index--;
	while (index != 0)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		return (-1);
		index--;
	}
	X = tmp->next;
	tmp->next = X->next;
	free(X);
	return (1);
}
