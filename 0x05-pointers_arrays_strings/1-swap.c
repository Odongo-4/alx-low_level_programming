#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @a: 1st interger
 * @b: 2nd interger
 */
void swap_int(int *a, int *b)
{
int changed;
changed = *a;
*a = *b;
*b = changed;
}
