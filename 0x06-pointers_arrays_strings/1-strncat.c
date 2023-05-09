#include "main.h"

/**
* _strncat - Concatenates two strings, using at most n bytes of src.
* @dest: The destination string.
* @src: The source string.
* @n: The maximum number of bytes to use from src.
*
* Return: A pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;

while (dest[i] != '\0')
i++;

for (j = 0; j < n && src[j] != '\0'; j++)
dest[i + j] = src[j];
dest[i + j] = '\0';

return (dest);
}
