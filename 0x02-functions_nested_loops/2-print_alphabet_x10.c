#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
	char d;
	int i = 0;

	while (i < 10)
	{
		d = 'a';
		while (d <= 'z')
		{
			putchar(d);
			d++;
		}
		putchar('\n');
		i++;
	}
}