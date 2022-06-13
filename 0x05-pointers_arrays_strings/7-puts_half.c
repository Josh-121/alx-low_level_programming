#include "main.h"
#include <string.h>
/**
 * puts_half - a function that prints half of a string,
 * followed by a new line
 *
 * @str: char pointer variable
 *
 * Return: nothing
 */
void puts_half(char *str)
{
int len = strlen(str);
int i;
for (i = 0; i < len; i++)
{
if (i == len / 2)
_putchar(str[i]);
}
_putchar('\n');
}
