#include <stdio.h>

#include "main.h"
void print_to_98(int n)

int main(void)
{
      int n=30;
      print_to_98(n);
      return (0);
}
void print_to_98(int n)
{
	if(n >= 0 && n<= 98)
	{
		for(int i= n; i<=98;i++)
		{
			printf("%d, ",i);

		}
	}
	else if (n>98)
	{
		for (int i= 98; i<=n;i++)
		{
			printf("%d, "i);
		}
	}
	else if (n<0)
	{
		for (int i= n, i<=98,i++)
		{
			printf("%d, ",i);
		}


	}
}
	

