#include "lists.h"

/**
 * delete_nodeint_at_index - ...
 *
 * @head: ...
 * @index: ...
 * Return: ...
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev  = NULL;
	unsigned int pos = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (pos < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		pos++;
	}
	prev = temp;
	temp = temp->next;
	prev->next = temp->next;
	free(temp);
	return (1);
}
