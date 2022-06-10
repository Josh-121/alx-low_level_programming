#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *  * print_number - print any integer using putchar
 *   * @n: integer to be printed
*/
void print_number(int n)
{
char a[];
sprintf(a, "%d", n);
for (int i = 0; i < strlen(a); i++)
{
_putchar(i);
}
_putchar('\n');
}
