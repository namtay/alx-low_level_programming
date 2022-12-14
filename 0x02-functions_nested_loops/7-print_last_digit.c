#include <stdlib.h>

#include "main.h"

int print_last_digit(int d);

int main(void)
{
	int d= 12233;
	int r;
	r= print_last_digit(int d);
	_putchar(r);
	_putchar('\n');
	return (0);
}



int print_last_digit(int d)
{
	 return (d %10);
}
