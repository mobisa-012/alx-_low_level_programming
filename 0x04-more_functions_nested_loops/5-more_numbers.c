#include "main.h"
#include <stdio.h>  
/**
 *more_numbers - prints 0 - 14.
 *
 *Return: void.
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j >= 10)
				putchar('0' + j / 10);
			putchar('0' + j % 10);
			j++;
		}
		putchar('\n');
		i++;
	}
}