#include "main.h"
/**
 * _strcmp - compares to strings
 * @s1: A point to a character that will be changed
 * @s2: A point to a character that will also be changed
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
char *str_one = s1;
char *str_two = s2;
while (*str_one != '\0' && *str_one == *str_two)
{
str_one++;
str_two++;
}
return (*str_one - *str_two);
}
