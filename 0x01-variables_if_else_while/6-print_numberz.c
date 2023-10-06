#include <stdio.h>

/**
 * main - Entry point
 * Description: prints numbers from 0 to 9 using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');

	return (0);
}
