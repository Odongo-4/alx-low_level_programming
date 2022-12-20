#include "main.h"
/**
 * *_strcpy - function that copies str
 * @src: pointer
 * @dest: pointer of the return value
 * Return: pointer of dest
 */
char *_strcpy(char *dest, char *src)
{
int len = 0;
while (*(src + len) != '\0')
{
*(dest + len) = *(src + len);
len++;
}
*(dest + len) = '\0';
return (dest);
}
