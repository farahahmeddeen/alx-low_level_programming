#include "lists.h"
/**
 * add_node - function that adds node
 *
 * @head: linked list head
 * @str: string
 *
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *fa = malloc(sizeof(list_t));

	if (fa == NULL)
	{
		return (NULL);
	}
	fa->str = strdup(str);
	fa->len = strlen(str);
	fa->next = *head;
	*head = fa;
	return (fa);
}
