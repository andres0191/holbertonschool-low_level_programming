#include "search_algos.h"
/** liear_search - searches for a value in an array of integers
 * @array : is a pointer to the first element
 * @size : is the number of elements in array 
 * @value : is the value to search
 *
 * Return: Always 0
 **/
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;
    
    if (array != NULL)
    {
        for (i = 0; i < size; i++)
        {
            printf("Value checked array[%lu] = [%i]\n", i, array[i]);
            if (array[i] == value)
                return (i);
        }
    }
    else
        return (-1);
    return (-1);
}

