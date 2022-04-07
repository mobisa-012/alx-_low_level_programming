#include "main.h"
#include <stdio.h>

/**
 *print_square - prints square of size size.
 *@size: size of square.
 *
 *Return: void.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			putchar('#');
			for (j = 1; j < size; j++)
			{
				putchar('#');
			}
		putchar('\n');
		}
	}
}