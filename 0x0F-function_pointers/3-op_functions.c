#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - gets the sum
  * @a: first num
  * @b: second num
  *
  * Return: the int result
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - operates the mines op
  * @a: first number
  * @b: sec number
  *
  * Return: int result
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - dot opperation
  * @a: first num
  * @b: second number
  *
  * Return: int result
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - devid opperation
  * @a: first num
  * @b: second number
  * Return: int result
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
