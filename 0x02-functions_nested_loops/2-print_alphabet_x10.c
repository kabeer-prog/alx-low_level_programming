#include  "main.h"

/**
 * print_alphabet_x10.c - print alphabet 10 times
 *
 * Return: Always 0;
 *
 */
void print_alphabet(void)
{
	char i;
	char h;

	for (h = 1; h <= 10; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar ('\n');
	}
}
