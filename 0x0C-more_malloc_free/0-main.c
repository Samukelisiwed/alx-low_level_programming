#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* main - check the code
*
* Return: Always 0.
*/

int main(void)

{

char *c;
int *i;
float *f;
double *d;

c = (char *)malloc(sizeof(char) * 1024);  /* Use malloc instead of malloc_checked*/
printf("%p\n", (void *)c);
i = (int *)malloc(sizeof(int) * 402);
printf("%p\n", (void *)i);
f = (float *)malloc(sizeof(float) * 100000000);
printf("%p\n", (void *)f);
d = (double *)malloc(INT_MAX);
printf("%p\n", (void *)d);

if (c == NULL || i == NULL || f == NULL || d == NULL) {
/* Check if memory allocation was successful*/
printf("Memory allocation failed\n");
return 1;
}
free(c);
free(i);
free(f);
free(d);
return (0);
}
