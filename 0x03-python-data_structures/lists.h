#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct listint_s - The singly linked list
 * @n: An int
 * @next: The points to the next node
 *
 * Description: The singly linked list node struct
 *              for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

void reverse_listint(listint_t **head);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
int is_palindrome(listint_t **head);
size_t print_listint(const listint_t *h);

#endif /* LISTS_H */
