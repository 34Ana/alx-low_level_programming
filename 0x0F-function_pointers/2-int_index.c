#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer to the comparing function
 * Return: index of first match or -1 if no match found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
