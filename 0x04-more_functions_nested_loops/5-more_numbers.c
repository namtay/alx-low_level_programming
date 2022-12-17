#include "main.h"
void more_numbers(void);
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	 more_numbers();
	 return (0);
}


void more_numbers()
{
	for(int i=1; i<=14; i++)
	{
		for(int j=0; j<=14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
