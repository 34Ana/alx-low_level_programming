#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: unsigned integer that represents the
 * size of the array of characters to be created
 * @c: character that will be used to initialize
 * each element of the array
 * Return: pointer to the array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    if (size == 0) {
        return NULL;
    }

    array = malloc(size * sizeof(char));

    if (array == NULL) {
        return NULL;
    }

    for (i = 0; i < size; i++) {
        array[i] = c;
    }

    return array;
}

