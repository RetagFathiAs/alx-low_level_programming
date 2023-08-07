#include "main.h"
#include <stdlib.h>
/**
 * create_array : functins creates an array of chars, and initializes it with a specific char.
 *
 * Returns : NULL if size = 0, a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
char *arrays = malloc(size * sizeof(char));
int j =0;
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
