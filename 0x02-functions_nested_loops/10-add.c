#include <stdlib.h>

#include <unistd.h>
int add(int a, int b);
int main(void)
{   
	int n;
	n= add(10,20);
	printf("%n\n",n);
	return (0);
}

int add(int a, int b)
{
	return(a+b);
}

