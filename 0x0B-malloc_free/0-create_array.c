#include "main.h"
#include <stdlib.h>

/**
 * create_array - malloc with pointers
 *@size: size of the array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *arrays = malloc(size * sizeof(char));
unsigned int j = 0;
if (size == 0)
{
return (NULL);
}
for (j = 0; j < size; j++)
{
arrays[j] = c;
}
return (arrays);
}
