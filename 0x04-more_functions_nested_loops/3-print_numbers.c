#include "main.h"
void print_numbers(void);
/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)
{
	print_numbers();
	return (0);
}

void print_numbers()
{
	for(int i=0; i <=9;i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
		

