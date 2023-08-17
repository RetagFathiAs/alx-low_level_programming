#include "function_pointers.h"

/**
  * int_index - function that searches for an integer.
  * @array: array of strings of name
  * @size:  number of elements in the array
  * @cmp: pointer to be used to compare
  * Return: -1 or 1 or 0.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (j < size)
			{
				if (cmp(array[j]))
					return (j);

				j++;
			}
		}
	}

	return (-1);
}
