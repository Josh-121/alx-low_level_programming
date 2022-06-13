#include "main.h"
#include <string.h>

void print_rev(char *s)
{
	int len = strlen(s);
	int i;
	int j;
	for(i=len-1 ; i>=0 ; i--)
	{
	j=len-1-i;
        s[j]=s[i];
	}
	_putchar('\n');
}
