#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *strcopy;
	int counter, k = 0;

	if (str == NULL)
		return (NULL);

	while (str[counter] != '\0')
		counter++;

	strcopy = (char *)malloc((sizeof(char) * counter) + 1);
	if (strcopy == NULL)
		return (NULL);

	for (k = 0; k < counter; k++)
		strcopy[k] = str[k];
	strcopy[counter] = '\0';

	return (strcopy);
}
