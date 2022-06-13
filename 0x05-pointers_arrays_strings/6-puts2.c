#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: char pointer variable
 *
 * Return: nothing.
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
