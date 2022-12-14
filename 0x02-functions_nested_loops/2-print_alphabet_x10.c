#include "main.h"
/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
int ten = 0;
char la;
while (ten <= 9)
{
for (la = 'a'; la <= 'z'; la++)
{
_putchar(la);
}
_putchar('\n');
ten++;
}
}
