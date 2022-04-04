/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** main
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int my_printf(char *str, ...)
{
    va_list ap;
    int index = 0;

    va_start(ap, str);
    while (str[index] != '\0') {
        if (str[index] == '%') {
            index++;
            index = space_case_flag(str, ap, index);
            get_str_adress(str, ap, index);
            flag_s_cap(str, ap, index);
            basic_flags(str, ap, index);
            convert_flags(str, ap, index);
            index = long_long_flags(str, ap, index);
            index = long_flags(str, ap, index);
        } else
            my_putchar(str[index]);
        index = index + 1;
    }
    va_end(ap);
    return 0;
}
