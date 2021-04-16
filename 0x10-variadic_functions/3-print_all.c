#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* printChar - print
*
* @lol: print
*
* Return: void
*/
void printChar(va_list lol)
{
printf("%c", va_arg(lol, int));
}
/**
* printInt - print
*
* @lol: print
*
* Return: void
*/
void printInt(va_list lol)
{
printf("%d", va_arg(lol, int));
}
/**
* printFloat - print
*
* @lol: print
*
* Return: void
*/
void printFloat(va_list lol)
{
printf("%f", va_arg(lol, double));
}
/**
* printString - print
*
* @lol: print
*
* Return: void
*/
void printString(va_list lol)
{
char *ch;
ch = va_arg(lol, char *);
if (ch == NULL)
{
printf("(nil)");
return;
}
printf("%s", ch);
}
/**
* print_all - print
*
* @format: print
*
* Return: void
*/
void print_all(const char * const format, ...)
{
int i, j;
char *sep = "";
va_list obj;

form mind[] = {
{"c", printChar},
{"i", printInt},
{"f", printFloat},
{"s", printString},
{NULL, NULL},
};


va_start(obj, format);

i = 0;
while (format && format[i])
{
j = 0;
while (mind[j].cond)
{
if (*(mind[j].cond) == format[i])
{
printf("%s", sep);
mind[j].printType(obj);
sep = ", ";
}
j++;
}
i++;
}

va_end(obj);
printf("\n");
}
