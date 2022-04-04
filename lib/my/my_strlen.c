/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** count number of characters
*/

#include <stddef.h>
#include <stdio.h>

int my_strlen(char const *str)
{
    int count = 0;

    if (str == NULL)
        return (84);
    while (str[count] != '\0') {
        count = count + 1;
    }
    return (count);
}
