#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i, *j;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);

	i->str = strdup(str);
	if (i->str == NULL)
	{
		free(i);
		return (NULL);
	}
	while (str[length])
		length++;
	i->len = length;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}

	j = *head;
	while (j->next)
		j = j->next;
	j->next = i;
	return (i);
}
