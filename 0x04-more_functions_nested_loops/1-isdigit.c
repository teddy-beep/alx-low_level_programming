#include "main.h"

/**
 * _isdigit - Checks if a character is 0 through 9.
 * @c: The character to be checked.
 *
 * Return: 1 if character is 0 through 9, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
