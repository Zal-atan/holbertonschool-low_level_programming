#include "main.h"

/**
 * _pow_recursion - Raised x to the power of y
 *
 * @x: integer to be raised to the power of
 *
 * @y: power to which x is raised
 *
 * Return: Returns x to the power of y
 *
 */

int _pow_recursion(int x, int y)
{
	long unsigned int i;

	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);

	if (y == 1)
		return (x);

	i = (x * _pow_recursion(x, y - 1));
	return (i);
}

/**
 * print_binary - prints binary from decimal input
 *
 * @n: decimal based number to print in binary
 *
 * Return: return nothing
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned int sum = 0;
	int num = n, temp;

	if (n == 0)
		_putchar('0'); /*In the case of n = 0*/

	while (num > _pow_recursion(2,i)) /*Count how many digits needed*/
		{
			i++;
		}
	
	temp = i; /*temp will help with 0's on front*/
	for (; i >= 0; i--)
	{
		/*Print char by char, if a 1 doesnt take sum over value of n, print 1*/
		/*Else, print 0, with exception, dont print 0 as first num*/
		if (n >= sum + _pow_recursion(2,i)) 
		{
			_putchar('1');
			sum += _pow_recursion(2,i);
		}
		else
		{
			if (temp == i)
				continue;
			else
				_putchar('0');
		}
	}
}
