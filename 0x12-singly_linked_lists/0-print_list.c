#include <unistd.h>
#include "lists.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
 * print_list - print counter all elements of `list_t` list
 * @h: head of linked list
 * Return: counter number of nodes
 */

size_t print_list(const list_t *h)
{
size_t i = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");

else
printf("[%d] %s\n", h->len, h->str);
i++;
h = h->next;
}

return (i);
}
