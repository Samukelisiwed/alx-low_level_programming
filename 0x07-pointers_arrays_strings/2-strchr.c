#include "main.h"

/**
* _strch - locates a character in a string
* @s: a pointer to the string to be searched.
* @c: the character to be searched for.
*
* Return: Always 0 (success)
*/

char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
