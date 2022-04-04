/*
** EPITECH PROJECT, 2021
** convert_bin
** File description:
** convert nb into a binary nb
*/

#include "my.h"

void my_unsigned_convert_bin(unsigned int nb)
{
    char binary[2] = "01";
    int dec = 1;
    unsigned int result = 0;

    nb = nb_neg(nb);
    while ((nb / dec) >= 2) {
        dec = dec * 2;
    }
    while (dec > 0) {
        result = (nb / dec) % 2;
        my_putchar(binary[result]);
        dec = dec / 2;
    }
}
