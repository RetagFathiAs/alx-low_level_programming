#include "main.h"
/**
 * create_array : functins creates an array of chars, and initializes it with a specific char.
 *
 * Returns : NULL if size = 0, a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
char *arrays = malloc(size * sizeof(char));
if (size == 0)
{
return (NULL);
}
else 
{
for (int i = 0; i < size; i++)
{
arrays[i] = c;
}
return (arrays);
}
}
