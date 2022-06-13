#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: char pointer variable
 *
 * Return: nothing.
 */
void puts_half(char *str)
{
int len = strlen(str);
int i;
for (i = len / 2; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
