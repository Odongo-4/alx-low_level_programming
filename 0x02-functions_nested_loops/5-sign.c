#include "main.h"
/**
 * print_sign - prints the sig of a number
 * @n: character to be checked
 *
 * Return: 1 if n is +ve, 0 if zero, -1 if -ve
 */
int print_sign(int n)
{
if (n > 0)
_putchar('+');
return (1);
else if (n == 0)
_putchar('0');
return (0);
else
_putchar('-1');
return (-1);
}
