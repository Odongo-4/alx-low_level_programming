#include "main.h"
/**
 * rev_string - function that reverses a strng
 * @s: string to be reversed
 */
void rev_string(char *s)
{
char rv = s[0];
int c = 0, i;
while (s[c] != '\0')
c++;
for (i = 0; i < c; i++)
{
c--;
rv = s[i];
s[i] = s[c];
s[c] = rv;
}
}
