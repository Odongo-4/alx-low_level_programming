#include "main.h"
/**
 * print_times_table - prints n time table starting with 0
 *@n : the value of the times tables
 */
void print_times_table(int n)
{
int i, prod;
for (n = 0; n <= 15; n++)
{
for (i = 0; i <= n; i++)
{
prod = i * n;
_putchar(prod);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
