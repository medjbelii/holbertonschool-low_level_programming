#include "lists.h"
/**
* add_node - print
*
* @head: print
* @str: print
*
* Return: print
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *NwNode;
	unsigned int x = 0;

	NwNode = malloc(sizeof(list_t));
	if (NwNode == NULL)
		return (NULL);
	while (str[x])
		x++;
	NwNode->str = strdup(str);
	NwNode->len = x;
	NwNode->next = *head;
	*head = NwNode;
	return (NwNode);
}
