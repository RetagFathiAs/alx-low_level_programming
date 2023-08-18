#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints nums
 * @n: number of args
 * @separator: char will be printed also
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int counter;

va_start(ap, n);
for (counter = 0; counter < n; counter++)
{
if (separator == NULL)
{
separator = "";
}
printf("%d", va_arg(ap, unsigned int));
if (counter < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
