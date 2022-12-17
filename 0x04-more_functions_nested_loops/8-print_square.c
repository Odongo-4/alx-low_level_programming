#include "main.h"
/**
 * print_square - prints a square followed by new line
 * @size: size of the square
 */
void print_square(int size)
{
int i, j;
for (j = 0; j < size; j++)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
if (j != size - 1)
_putchar('\n');
}
_putchar('\n');
}
