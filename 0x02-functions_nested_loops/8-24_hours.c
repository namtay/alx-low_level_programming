#include <stdlib.h>

#include "main.h"

void jack_bauer();
int main(void)
{   
	jack_bauer();
	return(0);
}

void jack_bauer()
{
	 for(int i=0;i<24;i++)
	 {
		    for(int x=0;x<1440;x++)
		    {
			    printf("%2d :%2d",i, x%60);
		    }
		    printf("\n");

	 }
}
