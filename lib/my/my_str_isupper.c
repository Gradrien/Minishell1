/*
** EPITECH PROJECT, 2021
** isupper
** File description:
** isupper
*/

#include <stddef.h>
#include <stdio.h>

int my_str_isupper(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            i = i + 1;
        } else
            return (0);
    }
    return (1);
}
