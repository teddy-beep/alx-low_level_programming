#include "main.h"

/**
 * swap_int -swap the values of two integer a and b
 * @a: A pointer to an int that will be updated
 * @b: B pointer to an int that will be updated
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int f;
f = *a;
*a = *b;
*b = f;
}
