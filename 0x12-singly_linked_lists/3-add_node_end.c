#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: The begining of the node
 * @str: The string to be duplicated
 *
 * Return:  The adress to thr new elemnt
 *or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *p;
	list_t *new_node, *last_node;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	p = strdup(str);

	if (p == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new_node->str = p;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}

	return (new_node);
}
