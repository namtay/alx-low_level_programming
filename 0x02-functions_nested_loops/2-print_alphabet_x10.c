#include <stdlib.h>
#include <unistd.h>

void print_alphabet_x10(void);

int main(void)
{	
	print_alphabet_x10(void);

	return (0);

}

void print_alphabet_x10(void)
{    
	int i = 0;
	int s = 0;
	for( int s = 0; s<10;s++)
	{
		for (i='a';i<='z',i++)
		{
			 _putchar('r');
		}
	    	 _putchar('\n');
	}   
}	
