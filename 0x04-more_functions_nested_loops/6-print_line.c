#include "main.h"
void print_line(int n);
/**
 *
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	print_line(0);
	print_line(2);
	print_line(10);
	print_line(-4);
	return (0);
}



void print_line(int n)
{
	for(int i=n; i >0, i--)
	{
		_putchar('_');
	}
	_putchar('\n');
}

