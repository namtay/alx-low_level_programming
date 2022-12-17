#include "main.h"
void print_diagonal(int n);

/**
 *
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	return (0);
}

void print_diagonal(int n)
{	
	if(n==0)
	{
		_putchar('\n');
	}
	for(int i=n; i>0; i--)
	{
		
		for(int j=n ;j>0;j--)
		{
			_putchar(' ');
		}
		_putchar('\');
		_putchar('\n');
	}

} 
