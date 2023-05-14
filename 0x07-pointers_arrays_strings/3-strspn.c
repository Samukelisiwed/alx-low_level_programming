#include "main.h"

/**
* _strspn - Gets the length of a prefix substring
* @s: String to check
* @accept: String of acceptable characters
* Return: Number of bytes in the initial
* segment of `s` consisting only of bytes from `accept`.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;

while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
