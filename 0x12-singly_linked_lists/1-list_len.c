#include "lists.h"
/**
* list_len - print
*
* @h: print
*
* Return: print
*/
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str == NULL)
			return (x);

		else
			h = h->next;
		x++;
	}
	return (x);
}
