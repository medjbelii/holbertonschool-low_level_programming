#include "lists.h"
/**
* add_node_end - print
*
* @head: print
* @str: print
*
* Return: print
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NwNode, *tmp;
	unsigned int x = 0;

	NwNode = malloc(sizeof(list_t));
	if (NwNode == NULL)
		return (NULL);
	while (str[x])
		x++;
	NwNode->str = strdup(str);
	NwNode->len = x;
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
