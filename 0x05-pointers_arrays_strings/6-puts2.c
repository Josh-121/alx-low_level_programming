#include "main.h"
#include <string.h>
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 *
 * @str: char pointer variable
 *
 * Return: nothing
 */
void puts2(char *str)
{
int len = strlen(str);
int i;
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
