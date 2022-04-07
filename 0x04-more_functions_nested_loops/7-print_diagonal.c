#include "main.h"
#include <stdio.h>

/**
 *print_diagonal - prints a line n chars long.
 *@n: number of \.
 *
 *Return: void.
 */
void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (space = 0; space < i; space++)
			{
				putchar(' ');
			}
			putchar(92);
			putchar('\n');
		}
	}
}