#include "main.h"
/**
 * print_rev - this is the function name
 * @s: this is the function parameter
 */
void print_rev(char *s)
{
int i;
int count = 0;

for (i = 0; s[i] != '\0'; i++)
	count++;
for (i = count - 1; i >= 0; i--)
	_putchar (s[i]);
_putchar ('\n');
}
