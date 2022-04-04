/*
** EPITECH PROJECT, 2021
** long_flags
** File description:
** long_flags
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int long_flags(char *str, va_list ap, int index)
{
    if (str[index] == 'l' && str[index + 1] == 'i') {
        my_put_nbr_long(va_arg(ap, long));
        index++;
    }
    if (str[index] == 'l' && str[index + 1] == 'd') {
        my_put_nbr_long(va_arg(ap, long));
        index++;
    }
    if (str[index] == 'l' && str[index + 1] == 'u') {
        my_uns_put_nbr_long(va_arg(ap, long));
        index++;
    }
    va_end(ap);
    return (index);
}

int long_long_flags(char *str, va_list ap, int index)
{
    if (str[index] == 'l' && str[index + 1] == 'l' && str[index + 2] == 'i') {
        my_put_nbr_long_long(va_arg(ap, long long));
        index += 2;
    }
    if (str[index] == 'l' && str[index + 1] == 'l' && str[index + 2] == 'd') {
        my_put_nbr_long_long(va_arg(ap, long long));
        index += 2;
    }
    if (str[index] == 'l' && str[index + 1] == 'l' && str[index + 2] == 'u') {
        my_uns_put_nbr_long_long(va_arg(ap, long long));
        index += 2;
    }
    va_end(ap);
    return (index);
}

void flag_s_cap(char *str, va_list ap, int index)
{
    if (str[index] == 'S')
        my_str_isprintable(va_arg(ap, char *));
    va_end(ap);
}
