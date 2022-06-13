#include "main.h"
#include <string.h>

void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	int j=0;
	for(i=len-1 ; i>=0 ; j++)
	{
        s[j]=s[i];
	i-- ;
	}
	_putchar('\n');
}
