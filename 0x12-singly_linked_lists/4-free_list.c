#include "lists.h"
/**
* free_list - print
*
* @head: print
*
* Return: print
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
