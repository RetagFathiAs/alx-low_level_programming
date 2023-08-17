#include "function_pointers.h"

/**
 * array_iterator - function given as parameter
 *on each element of an array.
 * @array: execute function
 * @size: size of array
 * @action:a pointer to the function you use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	if (array && action)
	{
		count = 0;
		while (count < size)
		{
			action(array[count]);
			count++;
		}
	}
}
