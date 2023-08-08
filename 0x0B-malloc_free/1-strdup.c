#include "main.h"
#include "stdlib.h"
/**
 *  _strdup - Entry point
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL if it fails
 */
char *_strdup(char *str)
{
	char *strmall = NULL;
	unsigned int k = 0;
	int counter;

	if (str == NULL)
		return (NULL);
	for (counter = 0 ; str[counter] != '\0' ; counter++)
		;
strmall = (char *)malloc(counter + 1 * sizeof(char));
if (strmall != NULL)
{
	for (k = 1 ; str[k] != '\0' ; k++)
		strmall[k] = str[k];
}
else
{
	return (NULL);
}
str[k] = '\0';
return (strmall);
}
