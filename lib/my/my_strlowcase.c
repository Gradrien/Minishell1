/*
** EPITECH PROJECT, 2021
** lowcase
** File description:
** lowcase
*/

#include <stddef.h>

char *my_strlowcase(char *str)
{
    int i = 0;

    if (str == NULL)
        return (NULL);
    while (str[i] != '\0') {
        if (str[i] <= 90 && str[i] >= 65) {
            str[i] = str[i] + 32;
        }
        i = i + 1;
    }
    return (str);
}
