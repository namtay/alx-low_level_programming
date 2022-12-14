#include <stdlib.h>

#include <unistd.h>



int _abs(int x);
int main(void)
{	
	int d= 2;
	_abs(d);
	_putchar('\n');
	return (0);
}
int _abs(int x)
{
	return abs(x);
}
