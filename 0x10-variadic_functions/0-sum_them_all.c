#include <stdarg.h>

/**
* sum_them_all - Returns the sum of its parameters.
* @n: The number of parameters.
*
* Return: The sum of all parameters.
*         If n is 0, returns 0.
*/

int sum_them_all(const unsigned int n, ...)

{
unsigned int i;
int sum = 0;
va_list args;

if (n == 0)
return (0);

va_start(args, n);

for (i = 0; i < n; i++)
{
int num = va_arg(args, int);
sum += num;
}

va_end(args);

return (sum);
}
