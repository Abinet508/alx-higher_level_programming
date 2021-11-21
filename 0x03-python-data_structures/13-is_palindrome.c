#include <stdio.h>
#include "lists.h"
/**
 * is_palindrome - a function that checks for palindrome
 * @head: pointer to a listint_t
 *
 * Return: 0 if it is not a palindrome, 1 if it is
 */
int is_palindrome(listint_t **head)
{
	listint_t *temp;
	int length = 0, initial = 0;
	char buffer[1000];

	if (*head == NULL)
		return (1);
	temp = *head;
	while (temp != NULL)
	{
		buffer[length] = temp->n;
		length++;
		temp = temp->next;
	}
	length--;
	while (initial < length)
	{
		if (buffer[initial] == buffer[length])
		{
			initial++;
			length--;
		}
		else
			return (0);
	}
	return (1);
}
