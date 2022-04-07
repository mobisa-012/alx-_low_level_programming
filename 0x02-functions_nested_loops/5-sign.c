#include "main.h"
#include <stdio.h>

/**
 * print_sign - check numers
 * @n : number to check
 * Return:0 or 1
 */

int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		putchar('0');
	}
	else
	{
		test = -1;
		putchar('-');
	}

	return (test);
}
