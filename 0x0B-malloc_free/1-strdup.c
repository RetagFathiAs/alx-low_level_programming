#include "main.h"
#include <stdlib.h>
/**
 *  _strdup - Entry point
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL if it fails
 */
char *_strdup(char *str)
{
	char *strmall = NULL;
	int k = 0;
	int counter;

	if (str == NULL)
		return (NULL);
	for (counter = 0 ; str[counter] != '\0' ; counter++)
		;
strmall = (char *)malloc((sizeof(char) * counter) + 1);
if (strmall != NULL)
{
	for (k = 1 ; k < counter ; k++)
		strmall[k] = str[k];
}
else
{
	return (NULL);
}
str[k] = '\0';
return (strmall);
}
