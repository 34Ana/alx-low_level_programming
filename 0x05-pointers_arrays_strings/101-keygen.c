#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random passwords for
 * program 101-crackme.
 * Return: 0.
 */
int main(void)
{
    char password[84];
    int index = 0, sum = 0, diff_half1 = 0, diff_half2 = 0;
    srand(time(0));
    while (sum < 2772)
    {
        password[index] = 33 + rand() % 94;
        sum += password[index++];
    }
    password[index] = '\0';
    if (sum != 2772)
    {
        int diff = (sum - 2772) / 2;
        if ((sum - 2772) % 2 != 0)
            diff++;
        for (index = 0; password[index]; index++)
        {
            if (password[index] >= (33 + diff))
            {
                password[index] -= diff;
                break;
            }
        }
        for (index = 0; password[index]; index++)
        {
            if (password[index] >= (33 + diff))
            {
                password[index] -= diff;
                break;
            }
        }
    }
    printf("%s", password);
    return (0);
}

