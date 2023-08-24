#include "lists.h"

/**
 * _strlen - Returns ht of a string.
 * @s: Type chanter
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	unsigned int l;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	return (l);

}

/**
 * *add_node - Return thea linked list
 * @head: data typf struct node
 * @str: data type poistruct
* Return: eleme the str i
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_n;

	n_n = malloc(sizeof(list_t));

	if (n_n == NULL)
		return (NULL);

	n_n->str = strdup(str);
	n_n->len = _strlen(str);
	n_n->next = *head;
	*head = n_n;

	return (n_n);
}
