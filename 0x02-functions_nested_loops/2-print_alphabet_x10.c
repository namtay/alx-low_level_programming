#include <stdlib.h>
#include "main.h"

void print_alphabet_x10();

int main()
{	
	print_alphabet_x10();

	return (0);

}

void print_alphabet_x10()
{    
	char i;
	int s = 0;
	for(  s = 0; s<10;s++)
	{
		for (i='a'; i<='z',i++)
		{
			 _putchar(i);
		}
		_putchar('\n');
	}
}
	    
