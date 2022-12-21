#include <unistd.h>



/**
 *
 *  * _putchar - writes the character c to stdout
 *
 *   * @c: The character to print
 *
 *    *
 *
 *     * Return: On success 1.
 *
 *      * On error, -1 is returned, and errno is set appropriately.
 *
 *       */

int _putchar(char c)

{

		return (write(1, &c, 1));

}


void swap_int(int *a, int *b)
{
		int tmp;
		tmp= *a;
		*a=*b;
		*b=tmp;
}


void reset_to_98(int *n)
{
	*n=98;
}

int _strlen(char *s)
{
	int i;
	for (i = 0; *s[i] != '\0'; ++i);
	i=i+1;
	return i;
}

void _puts(char *str)
{
	 while(*str!='\0')
	 {
		 _putchar(*str);
		 *str++;

	 }


}

void print_rev(char *s)
{
	for (int i = _strlen(*s); i >=0; i++)
	{
		_putchar( *(s + i));
	}
	_putchar('\n');

}
                                                                           
void rev_string(char *s)
{
	 for (int i = _strlen(*s); i >=0; i++)
	 {
		 _putchar( *(s + i));
	 }
	 _putchar('\n');
}

void puts2(char *str)
{
	for (int i = _strlen(*s); i >=0; i+2)
	{

		_putchar( *(s + i)); 
	}
		_putchar('\n');
}

void puts_half(char *str)
{
	int len= _strlen(*str);
	int half=(len-1)/2;
	for(int i= half; i<=len,i++)
	{	
		_putchar(*(strr+i));
	}
	_putchar('\n');
}

void print_array(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d", *(a+1));
	}
	printf('\n');
}

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
       	{
		 *dest = *src;
		 *src++;
		 *dest++;
	}
	return dest;
}


	
