#include <stdlib.h>
#include "main.h"

void print_alphabet(void);


int main(void)
{  
	 print_alphabet();
	 return (0);

}

void print_alphabet(void)
{
	char i;
	for (i='a'; i<='z';i++)
	{
		 _putchar(i);
	}
	_putchar('\n');
}
