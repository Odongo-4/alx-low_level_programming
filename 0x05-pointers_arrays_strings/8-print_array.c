#include <stdio.h>
/**
 * print_array - function that prins elements of arrain
 * @a: pointervariable
 * @n: number of array elements
 */
void print_array(int *a, int n)
{
int t;
for (t = 0; t < n; t++)
{
printf("%d", a[t]);
if (t != n - 1)
printf(", ");
}
printf("\n");
}
