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
	int lenght = 0 , k;

	if (str == NULL)
		return (NULL);

	for (lenght = 0; str[lenght] != '\0'; lenght++);

	strcopy = (char *)malloc((sizeof(char) * lenght) + 1);
	if (strcopy == NULL)
		return (NULL);

	for (k = 0; k < lenght; k++)
		strcopy[k] = str[k];
	strcopy[lenght] = '\0';

	return (strcopy);
}
