#include <stdlib.h>

#include <unistd.h>

int print_last_digit(int d);

int main(void)
{
	int d= 12233;
	print_last_digit(int d);
	_putchar('\n');
	return (0);
}



int print_last_digit(int d)
{
	 return (d %10);
}
