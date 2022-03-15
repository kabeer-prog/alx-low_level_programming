#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0 (SUccess)
 *
 */
int main(void)
{
	int a;
	int b;

	for (a = b; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b += a;
		}
	}
	printf("%d\n", b);
	return (0);
}
