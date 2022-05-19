#include "lists.h"
/**
 * print_list - prints all the elements  a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
int i;
i = 0;
while (h != NULL)
{
if (!h->str == NULL)
{
printf("[0] (nil)\n");
h = h->next;
i++;
}
printf("[%d] %s\n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}
