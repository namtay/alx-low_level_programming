#include <stdlib.h>
#include "main.h"
int _islower(int c);
int main(void)
{   
	int d= 1;
	_islower((d));
	_putchar('\n');
	 return (0);
}

int _islower(int c)
{ 
	if (islower(c))
	{
		return 1;
	}
	else
	{	
		return 0;
	}
}
