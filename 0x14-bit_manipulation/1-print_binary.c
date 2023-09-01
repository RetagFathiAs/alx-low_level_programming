#include "main.h"

/**
 * _right_pbin_mask - recursion  (acts as a mask)
 * @n: typeg int
 */

void _right_pbin_mask(unsigned long int n)
{
	if (n == 0)
		return;
	_right_pbin_mask(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - priesentation of a number
 * @n: type coong int
 * Return: number
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		_right_pbin_mask(n);
}
