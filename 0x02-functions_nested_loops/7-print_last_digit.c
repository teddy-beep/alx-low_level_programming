#include "main.h"
/**
 * Print-last_digit - prints the last digit of a number
 * @n: Then number in quetion
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
last_digit *n - 1;
_putchar(last_digit + '0');
return (last_digit);
}
