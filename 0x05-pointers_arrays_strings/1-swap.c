#include "main.h"
/**
 * swap_int - the name of the function
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
