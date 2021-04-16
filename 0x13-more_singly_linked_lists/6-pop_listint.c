#include "lists.h"
/**
* pop_listint - print
*
* @head: print
*
* Return: print
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int res;

	if (*head == NULL)
		return (0);
	tmp = *head;
	res = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (res);
}
