/*
** EPITECH PROJECT, 2021
** put_nbr_base
** File description:
** put_nbr_base
*/

#include "my.h"

void my_putchar(char c);

void my_put_nbr_base(unsigned long nb, char *base)
{
    int len = my_strlen(base);
    long dec = 1;
    unsigned long result = 0;

    while ((nb / dec) >= len) {
        dec = dec * len;
    }
    while (dec > 0) {
        result = (nb / dec) % len;
        my_putchar(base[result]);
        dec = dec / len;
    }
}
