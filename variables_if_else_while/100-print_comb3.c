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

	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = (a + 1); b <= 9 ; b++)
		{
			putchar(a + 48);
			putchar(b + 48);
			if (a == 8 && b == 9)
				break;
			putchar(',');
			putchar(' ');
		}		
	}
	putchar('\n');
	return (0);
}
