#include "main.h"
#include <stdio.h>

/**
 *print_line - prints a line n chars long.
 *@n: length of line.
 *
 *Return: void.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
	putchar('\n');
	}
}