#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - as named
 *@separator: between strings
 *@n: number of strings
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
char *p;
unsigned int counter;

va_start(ap, n);
if (separator == NULL)
separator = "";
for (counter = 0; counter < n; counter++)
{
p = va_arg(ap, char*);
if (p == NULL)
p = "(nil)";
printf("%s", p);
if (counter < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
