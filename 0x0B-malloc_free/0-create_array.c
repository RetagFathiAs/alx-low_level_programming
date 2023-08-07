#include "main.h"
#include <stdlib.h>
/**
 * char *create_array(unsigned int size, char c) functin that creates an array of chars,
 * and initializes it with a specific char.
 * description : create_array - using pointers
 *@size: size of the array
 *@c: character
 * Return : a pointer to the array, or NULL if it fails.
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
