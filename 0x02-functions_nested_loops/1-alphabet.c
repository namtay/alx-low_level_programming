#include <stdlib.h>
#include <unistd.h>

void print_alphabet(void);


int main(void)
{  
	 print_alphabet();
	 return (0);

}

void print_alphabet(void)
{
	int i = 0;
	for (i='a';i<='z',i++)
	{
		 _putchar(i);
	}
	_putchar('\n');
}
