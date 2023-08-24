#include "lists.h"

/**
 * _strlen - Returns thring.
 * @s: Type chter
 * Return: Al 0.
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
 * add_node_end - Returnof a string.
 * @str: Type nter
 * @head: type ruct
 * Return: new ode.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_n, *tmp_n_d;

	n_n = malloc(sizeof(list_t));

	if (n_n == NULL)
		return (NULL);

	n_n->str = strdup(str);
	n_n->len = _strlen(str);
	n_n->next = NULL;

	if (!*head)
	{
		*head = n_n;
	}
	else
	{
		tmp_n_d = *head;
		while (tmp_n_d->next)
			tmp_n_d = tmp_n_d->next;
		{
			tmp_n_d->next = n_n;
		}
	}
	return (n_n);
}
