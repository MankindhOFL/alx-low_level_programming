#include "main.h"

/**
 * puts_half - this is the name of the function
 * @str: this is the function parameter
 */

void puts_half(char *str)
{
int i;
int n;
int count;

for (i = 0; str[1] != '\0'; i++)
{
	count++;
}
n = (count - 1) / 2;
for (i = n + 1; str[1] != '\0'; i++)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
