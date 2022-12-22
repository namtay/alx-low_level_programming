#include <unistd.h>
#include <stdio.h>

int _putchar(char c)
{
	return (write(1, &c, 1));

}

char *_strcat(char *dest, char *src)
{
	while(*dest !='\0')
	{
		dest++;
	}
	while(*src !='\0')
	{
		*dest= *src;
		dest++;
		src++;
	}
	*dest='\0';
	return  (&dest);
}


char *_strncat(char *dest, char *src, int n)
{
	while(*dest !='\0')  
	{

		dest++;
	}
	if(sizeof(src)<n)
	{
		while(*dest !='\0')
		{
			*dest=*src;
			dest++;
			src++;
		}
	}
	else
	{
		while((n-sizeof(src))!=0)
		{
			*dest=*src;
			dest++;
			src++;

		}
	}
	return (&dest);
}

char *_strncpy(char *dest, char *src, int n)
{
	if((*dest == NULL) && (*src ==  NULL))
	{
		return NULL;
	}
	 char* beginning = dest;
	 while(*src && n--)
	 {
		 *dest = *src;
		  dest++;
		  src++;
	 }
	 *dest = '\0';
	 return beginning;
}
		
