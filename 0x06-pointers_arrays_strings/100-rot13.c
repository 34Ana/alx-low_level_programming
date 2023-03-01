#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13.
 * @str: string to encode
 * Return: pointer to encoded string
 */
char *rot13(char *str)
{
        int i, j;
        char detal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

        for (i = 0; str[i] != '\0'; i++)
        {
                for (j = 0; j < 52; j++)
                {
                        if (str[i] == detal[j])
                        {
                                str[i] = datarot[j];
                                break;
                        }
                }
        }

        return str;
}

