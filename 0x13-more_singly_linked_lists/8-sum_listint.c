#include "lists.h"
/**
* sum_listint - print
*
* @head: print
*
* Return: integer
*/
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
