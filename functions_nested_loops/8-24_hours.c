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
 *
 */

void jack_bauer(void)
{
	int a = 0;
	int b;
	int c;
	int d;

	while (a <= 2)
	{
		if (a < 2)
		{	
			b = 0;
			while (b <= 9)
			{
				c = 0;
				while (c <= 5)
				{
					d = 0;
					while (d <= 9)
					{
						_putchar(a + 48);
						_putchar(b + 48);
						_putchar(':');
						_putchar(c + 48);
						_putchar(d + 48);
						_putchar('\n');
						d++;
					}
					c++;
				}
				b++;
			}
		a++;
		}
		if (a == 2)
                {
                        b = 0;
                        while (b <= 3)
                        {
                                c = 0;
                                while (c <= 5)
                                {
                                        d = 0;
                                        while (d <= 9)
                                        {
                                                _putchar(a + 48);
                                                _putchar(b + 48);
                                                _putchar(':');
                                                _putchar(c + 48);
                                                _putchar(d + 48);
                                                _putchar('\n');
                                                d++;
                                        }
                                        c++;
                                }
                                b++;
                        }
                a++;
		}
	}

}
