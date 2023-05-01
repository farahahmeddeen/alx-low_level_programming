#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 *
 * @head: linked list head
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int fa;

	fa = 0;
	for (; head != NULL; head = head->next)
	{
		fa = fa + head->n;
	}
	return (fa);
}
