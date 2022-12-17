#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: Number of / can be printed
 */
void print_diagonal(int n)
{
int i;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar(92);
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
