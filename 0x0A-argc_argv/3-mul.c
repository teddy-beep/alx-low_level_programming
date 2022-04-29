#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
int n1, n2;

if (argc == 3)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
printf("%d\n", n1 * n2);
return (0);
}
printf("Error\n");
return (1);
}
