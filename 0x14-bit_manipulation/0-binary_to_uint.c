#include "main.h"
/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned  int binary_to_uint(const char *b)
{
int n;
unsigned int decimal = 0;
if (!b)
return (0);
for (n = 0; b[n]; n++)
{
if (b[n] < '0' || b[n] > '1')
return (0);
decimal = 2 * decimal + (b[n] - '0');
}
return (decimal);
}
