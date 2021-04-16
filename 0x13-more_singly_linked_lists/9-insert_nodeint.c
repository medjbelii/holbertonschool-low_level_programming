#include "lists.h"
/**
* insert_nodeint_at_index - print
*
* @head: print
* @idx: print
* @n: print
*
* Return: print
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *NwNode, *tmp;

	if (head == NULL)
		return (NULL);
	NwNode = malloc(sizeof(listint_t));
	if (NwNode == NULL)
		return (NULL);
	NwNode->n = n;
	tmp = *head;
	if (idx == 0)
	{
		NwNode->next = tmp;
		*head = NwNode;
		return (NwNode);
	}
	idx--;
	while (idx != 0)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		return (NULL);
		idx--;
	}
	NwNode->next = tmp->next;
	tmp->next = NwNode;
	return (NwNode);
}
