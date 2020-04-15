#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers
 * @array : is a pointer to the first element
 * @size : is the number of elements in array
 * @value : is the value to search
 *
 * Return: Always -1
 **/
 int binary_search(int *array, size_t size, int value)
 {
    size_t i = 0, m = 0;

    while (i < size)
    {
        m = ((i + size) / 2);
        if (array[m] < value)
        {
            i = m + 1;
            printf("Searching in array[%lu] = [%d]\n", i, array[i]);
        }
        else
            size = m;
    }
    return (i);
 }
