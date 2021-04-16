#include "lists.h"
/**
* add_nodeint - print
*
* @head: print
* @n: print
*
* Return:print
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NwNode;

	NwNode = malloc(sizeof(listint_t));
	if (NwNode == NULL)
		return (NULL);
	NwNode->n = n;
	NwNode->next = *head;
	*head = NwNode;
	return (NwNode);
}
