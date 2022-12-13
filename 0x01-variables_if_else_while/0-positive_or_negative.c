#include <stdio.h>
/**
 * main = asks for an integer random n
 * Return: 0, if exit correctly, non-zero if otherwise
 */
int main (void)
{
int n;
if (n>0)
printf("%d is positive\n", n);
else if (n==0)
printf("%d is zero\n", n);
else (n<0)
printf("%d is negative\n", n);
return (0);
}
