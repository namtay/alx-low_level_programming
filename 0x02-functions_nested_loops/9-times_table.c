#include <stdlib.h>

#include <unistd.h>
#void times_table(void);

int main(void)
{	
       	times_table();
	return (0);
}

void times_table(void)
{
	for(int i=0;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			printf("%d, ",j*i);
		}
		printf("\n");
	}
}
