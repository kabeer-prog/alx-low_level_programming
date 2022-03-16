#include "main.h"
#include "6-abs.c"
#include <stdio.h>
/**
 * print_to_98 - The description
 * @n: The number to be used
 *
 * Return: 1 if positive: 0 if otherwise
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
