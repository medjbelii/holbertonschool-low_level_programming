#include "lists.h"
/**
* get_nodeint_at_index - print
*
* @head: print
* @index: print
*
* Return: print
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp;

	tmp = head;
	if (tmp == NULL)
		return (NULL);
	while (tmp && a <= index)
	{
		if (a == index)
		return (tmp);
		a++;
		tmp = tmp->next;
	}
	return (NULL);
}
