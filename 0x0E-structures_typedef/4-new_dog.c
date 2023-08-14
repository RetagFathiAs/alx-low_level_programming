#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog pointer,NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, num, counter;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	dog->name = malloc(nl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (counter = 0; counter < nl; counter++)
		dog->name[counter] = name[counter];
	dog->age = age;
	for (num = 0; owner[num]; num++)
		;
	ol++;
	dog->owner = malloc(num * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (counter = 0; counter < num; counter++)
		dog->owner[counter] = owner[counter];
	return (dog);
}
