#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_all - prints all
 *@format: types of args
 *
 */
void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *p;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				flag = 0;
				break;
			case 's':
				p = va_arg(ap, char*);
				if (p == NULL)
					p = "(nil)";
				printf("%s", p);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
