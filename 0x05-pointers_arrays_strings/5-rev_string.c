#include "main.h"
#include <string.h>

void rev_string(char *s)
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
