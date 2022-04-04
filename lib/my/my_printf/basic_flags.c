/*
** EPITECH PROJECT, 2021
** basic_flags
** File description:
** my_printf
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

void basic_flags(char *str, va_list ap, int index)
{
    if (str[index] == 'i' || str[index] == 'd')
        my_put_nbr(va_arg(ap, int));
    if (str[index] == 's')
        my_putstr(va_arg(ap, char *));
    if (str[index] == 'c')
        my_putchar(va_arg(ap, int));
    if (str[index] == '%')
        my_putchar('%');
    va_end(ap);
}

void convert_flags(char *str, va_list ap, int index)
{
    if (str[index] == 'o')
        my_unsigned_convert_oct(va_arg(ap, int));
    if (str[index] == 'u')
        my_put_nbr_base(va_arg(ap, unsigned long), "0123456789");
    if (str[index] == 'x')
        my_unsigned_convert_hexa_low(va_arg(ap, unsigned long));
    if (str[index] == 'X')
        my_unsigned_convert_hexa(va_arg(ap, unsigned long));
    if (str[index] == 'b')
        my_unsigned_convert_bin(va_arg(ap, unsigned long));
    va_end(ap);
}

void get_str_adress(char *str, va_list ap, int index)
{
    if (str[index] == 'p') {
        my_putstr("0x");
        my_put_nbr_base(va_arg(ap, unsigned long), "0123456789abcdef");
    }
    va_end(ap);
}

int space_case_flag(char *str, va_list ap, int index)
{
    if (str[index] == ' ') {
        while (str[index] == ' ') {
            index++;
        }
    }
    return (index);
}
