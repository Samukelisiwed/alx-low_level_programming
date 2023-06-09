#include "main.h"

/**
* _atoi - converts a string to an integer.
* @s: The string to be converted.
*
* Return: The integer value of the string.
*/

int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
}
else if (result > 0)
{
break;
}
i++;
}
return (sign *result);
}
