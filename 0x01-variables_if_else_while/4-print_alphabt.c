#include <stdlib.h>

/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)

{
	char letter;

	for (letter='a';letter <='z';letter++)
	{
		if(letter!='q' || letter!='e')
		{
			putchar(letter);
		}
	}
	putchar('\n');

	return (0);
}
