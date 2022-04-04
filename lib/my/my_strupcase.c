/*
** EPITECH PROJECT, 2021
** strupcase
** File description:
** upcase
*/

#include <stddef.h>

char *my_strupcase(char *str)
{
    int i = 0;

    if (str == NULL)
        return (NULL);
    while (str[i] != '\0') {
        if (str[i] <= 122 && str[i] >= 97) {
            str[i] = str[i] - 32;
        }
        i = i + 1;
    }
    return (str);
}
