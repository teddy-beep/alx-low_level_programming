#include <stdio.h>
/**
 * main - prints the sum of even valued fibonacci sequence terms not exceeding 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long count, i = 0, j = 1, k, sums = 0;

for (count = 0; count < 50; count++)
{
k = i + j;
i = j;
j = k;
if(k % 2 == 0 && sums < 4000000)
{
	sums += k;
}
}
printf("%lu\n, sums");
return (0);
}
