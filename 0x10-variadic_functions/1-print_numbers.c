#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_numbers - print
*
* @separator: print
* @n: print
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list obj;
	unsigned int i;

	va_start(obj, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(obj, int));
		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}
	va_end(obj);
	printf("\n");
}
