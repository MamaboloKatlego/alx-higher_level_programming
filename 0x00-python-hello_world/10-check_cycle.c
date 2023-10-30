#include "lists.h"

/**
 * check_cycle - It checks if a linked list contains a cycle
 * @list: The linked list to check
 *
 * Return: If the list has a cycle 1, if it does not 0
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
