#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - calculates the sum
 * @n: number of args
 * Return: 0,or the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count,sum;
	sum = 0;
	va_start(ap,n);
	if(n == 0)
	{
		return 0;
	}
	else
	{
	for (count = 0;count < n;count++)
	{
		sum += va_arg(ap,unsigned int);
	}
	va_end(ap);
	return sum;
	}
}
