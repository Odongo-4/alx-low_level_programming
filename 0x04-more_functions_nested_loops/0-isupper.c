#include "main.h"
/**
 *_isupper - checks if a parameter is an uppecase
 *@c: input character
 *Return: 1 if uppercase , 0 in other case
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
