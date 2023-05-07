#include "main.h"

/**
* _atoi - Converts a string into an integer.
* @s: The pointer to the string to convert.
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
