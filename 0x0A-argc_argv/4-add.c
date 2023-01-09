#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - main funct
 *@argc: param count
 *@argv: param poiter
 *Return: int
 */
int main(int argc, char *argv[])
{
int count, sum = 0;
if (argc == 1)
printf("0\n");
else
{
for (count = 1; count < argc; count++)
{
if (isdigit(argv[count])
{
printf("%i\n", argv[count]);
sum += atoi(argv[count]);
}
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", sum);
return (0);
}
