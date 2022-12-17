#include "main.h"
void print_square(int size);

/**
 *
 * main - check the code
 * Return: Always 0.
 *
 */

int main(void)
{
	print_square(2);
	print_square(10);
	print_square(0);
	return (0);
}

void print_square(int size)
{
	if (size <=0)
	{
		_putchar('\n');
	}
	else
	{
		for(int i = size; i>0, i--)
		{
			for( int j=size; j>0; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
