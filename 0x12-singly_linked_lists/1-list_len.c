#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
	const list_t *num;
	unsigned int counter = 0;

	num = h;
	while (num)
	{
		counter++;
		num = num->next;
	}
	return (counter);
}
