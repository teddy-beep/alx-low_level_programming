#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from input to 98, io order
 *              separated by a comma followed by a space.
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n >= 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
