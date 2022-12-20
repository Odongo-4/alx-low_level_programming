#include "main.h"
/**
 * _strlen - displays the length of a string
 * @s: the caharacter to be returned
 * Return: length of string
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
