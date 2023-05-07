# include <stdio.h>

/**
 * swap_int - Swaps the values of two intergers
 * @a: the frist interger to be swapped.
 * @b: the second interger to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* this function that swaps the values of two integers. */
{
int temp = *a;
*a = *b;
*b = temp;
}
