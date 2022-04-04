/*
** EPITECH PROJECT, 2021
** convert_bin
** File description:
** convert nb into a binary nb
*/

#include "my.h"

void my_unsigned_convert_oct(unsigned long nb)
{
    char oct[8] = "01234567";
    long dec = 1;
    unsigned long result = 0;

    while ((nb / dec) >= 8) {
        dec = dec * 8;
    }
    while (dec > 0) {
        result = (nb / dec) % 8;
        my_putchar(oct[result]);
        dec = dec / 8;
    }
}
