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
	
int _strcmp(char *s1, char *s2)
{
	  int comp = 0;
	  while(*s1!='\0' && *s2!='\0')
	  {
		if(*s1!=*s2)
		{
			comp=1;
		}
		s1++;
		s2++;
	  }
  	  if (comp == 0)
	  {
		return 0;
	  }
	  else
        	{
		return 1;
		}
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void reverse_array(int *a, int n)
{
	int *b = array + n - 1;

	while(a<b)
	{
		swap(a,b)
		{
			a++;
			b--;
		}
	}
}

char *string_toupper(char *s)
{
	while(*s !='\0')
	{
		*s = (*s > 'a' && *s <= 'z') ? *s-32 : *s;
		s++;
	}
	return s;
}

