#include "main.h"

/**
* puts_half - prints half the string
* @str: the string to be printed
* Return: void
*/

void puts_half(char *str)
{
int len = 0, i;

while (str[len] != '\0')
len++;

if (len % 2 == 0)
i = len / 2;
else
i = (len + 1) / 2;

while (i < len)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
