#include <stdio.h>
/**
 * main - prints the sum of the muktiples
 *
 * Return: 0 successful
 */
int main(void)
{
int i, z = 0;
while (i <= 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
z = z + i;
}
i++;
}
printf("%d\n", z);
return (0);
}
