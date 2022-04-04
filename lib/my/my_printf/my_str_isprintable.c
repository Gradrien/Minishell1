/*
** EPITECH PROJECT, 2021
** isprintable
** File description:
** isprintable
*/

#include <stddef.h>
#include "my.h"

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] <= 127) {
            my_putchar(str[i]);
        } else {
            my_putchar('\\');
            my_convert_oct(str[i]);
        }
        i = i + 1;
    }
    return (0);
}
