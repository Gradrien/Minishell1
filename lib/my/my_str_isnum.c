/*
** EPITECH PROJECT, 2021
** isnum
** File description:
** isnum
*/

#include <stddef.h>

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (84);
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9' || str[i] == '-') {
            i = i + 1;
        } else
            return (84);
    }
    return (0);
}
