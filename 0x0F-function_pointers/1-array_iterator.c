#include <stdlib.h>
#include "function_pointers.h"
/**
  * array_iterator - name
  *
  * @array: name
  * @size: name
  * @action: name
  *
  * Return: name
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
