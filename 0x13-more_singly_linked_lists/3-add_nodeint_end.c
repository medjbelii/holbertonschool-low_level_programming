#include "lists.h"
/**
* add_nodeint_end - print
*
* @head: print
* @n: print
*
* Return: print
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NwNode, *tmp;

	NwNode = malloc(sizeof(listint_t));
	if (NwNode == NULL)
		return (NULL);
	NwNode->n = n;
	NwNode->next = NULL;
	if (*head == NULL)
		*head = NwNode;
	else
	{
		tmp = *head;
		while (tmp->next)
		tmp = tmp->next;
		tmp->next = NwNode;
	}
	return (NwNode);
}
