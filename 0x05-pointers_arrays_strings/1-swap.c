#include "holberton.h"
/**
* swap_int -  function that swaps the values of two integers.
* @a: value of in
* @b: value of in
**/
void swap_int(int *a, int *b)
{
int r;

r = *a;
*a = *b;
*b = r;
}
