#include "lists.h"
/**
 * add_node - Adds a new node
 * at the begining of a list_t list.
 * @head: Thr begining of a new node
 * @str: string to be duplicared
 *
 * Return: The address of the new element
 *or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *p;
	list_t *new_node;
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
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
