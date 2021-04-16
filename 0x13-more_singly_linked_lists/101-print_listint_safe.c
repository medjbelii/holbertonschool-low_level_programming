#include "lists.h"
/**
* print_listint_safe - print
*
* @head: print
*
* Return: print
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t T = 0;
	int a = 0;
	listint_t *tmp, *f, *s;

	tmp = (void *)head;
	f = tmp;
	s = tmp;
	if (tmp == NULL)
		exit(98);
	if (tmp->next == NULL)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		T++;
		return (T);
	}
	if (tmp->next == tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		printf("-> [%p] %d\n", (void *)tmp, tmp->n);
		T++;
		return (T);
	}
	while (f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
		{
			s = tmp;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			break;
		}
	}
	while (tmp && a < 2)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		T++;
		if (tmp == s)
		a++;
	}
	if (tmp == s)
		printf("-> [%p] %d\n", (void *)s, s->n);
	return (T);
}
