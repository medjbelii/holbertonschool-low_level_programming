#include "lists.h"
/**
* free_listint - print
*
* @head: print
*
* Return: print
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
