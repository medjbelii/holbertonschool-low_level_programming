#include <stdlib.h>
#include "function_pointers.h"

/**
  * print_name - name
  *
  * @name: name
  * @f: name
  *
  * Return: name
  */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	return;
	(*f)(name);
}
