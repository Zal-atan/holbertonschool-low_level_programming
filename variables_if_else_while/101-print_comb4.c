#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int a, b, c;

	for (a = 0; a < 9; a++)
	{
		for (b = (a + 1); b <= 9 ; b++)
		{
			for (c = (b + 1); c <= 9; c++)
			{
				putchar(a + 48);
				putchar(b + 48);
				putchar(c + 48);
				if (a == 7 && b == 8 && c == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
