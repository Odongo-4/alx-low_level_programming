#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints the multiplication of two integers
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 if it works, 1 if there is an ERROR
 */
int main(int argc, char *argv[])
{
int n, m, diff;
if (argc != 3)
{
printf("Error\n");
return (1);
}
n = atoi(argv[1]);
/*
 *atoi() is a function that converts sting to integer
 *and is stored in stdli.h header file
 */
m = atoi(argv[2]);
diff = n *m;
printf("%d\n", diff);
return (0);
}
