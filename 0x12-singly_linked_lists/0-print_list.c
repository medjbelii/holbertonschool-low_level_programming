#include "lists.h"
/**
* print_list - print
*
* @h: print
*
* Return: print
*/
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		x++;
	}
	return (x);
}
