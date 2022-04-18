#include "main.h"

/**
 * int_strlen - returns length of string
 * @s: string value
 * Return: Always 0
 */

int _strlen(chat *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
