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

	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9 ; b++)
		{
			d = (b + 1);
			for (c = a; c <= 9; c++)
			{
				for (; d <= 9 ; d++)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(' ');
					putchar(c + 48);
					putchar(d + 48);
					if (a == 9 && b == 8 && c == 9 && d == 9)
						break;
					putchar(',');
					putchar(' ');
				}
				d = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
