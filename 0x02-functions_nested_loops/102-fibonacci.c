#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers,starting with
 *        1 and 2, separeted by a comma followed by a space
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long count, fib1 = 0, fib2 = 1, sum;
fib1 = 0;
fib2 = 1;
for (count = 0; count < 50; count++)
{
sum = fib1 + fib2;
fib1 = fib2;
fib2 = sum;
printf("%lu", sum);
if (count == 49)
printf("\n");
else
{
printf(", ");
}
}
return (0);
}
