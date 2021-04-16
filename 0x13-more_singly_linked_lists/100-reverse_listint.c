#include "lists.h"
/**
* reverse_listint - print
*
* @head: print
*
* Return: print
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *X;

	tmp = NULL;
	if (*head == NULL)
		return (NULL);
	while (*head)
	{
		X = *head;
		*head = X->next;
		X->next = tmp;
		tmp = X;
	}
	*head = tmp;
	return (*head);
}
