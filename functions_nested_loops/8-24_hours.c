#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * jack_bauer - prints time 00:00 to 23:59
 *
 *
 *
 *
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b <= 9 ; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a == 2 && b > 3)
						break;
					_putchar(a + 48);
					_putchar(b + 48);
					_putchar(':');
					_putchar(c + 48);
					_putchar(d + 48);
					_putchar('\n');
				}
			}
		}
	}

}
