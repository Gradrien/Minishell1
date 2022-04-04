/*
** EPITECH PROJECT, 2021
** conver_hexa
** File description:
** convert a number into a hexa nbr
*/

#include "my.h"

void my_unsigned_convert_hexa_low(unsigned long nb)
{
    char hexa[16] = "0123456789abcdef";
    long dec = 1;
    unsigned long result = 0;

    while ((nb / dec) >= 16) {
        dec = dec * 16;
    }
    while (dec > 0) {
        result = (nb / dec) % 16;
        my_putchar(hexa[result]);
        dec = dec / 16;
    }
}
