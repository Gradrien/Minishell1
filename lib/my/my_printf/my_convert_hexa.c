/*
** EPITECH PROJECT, 2021
** conver_hexa
** File description:
** convert a number into a hexa nbr
*/

#include "my.h"

int my_convert_hexa(int nb)
{
    char hexa[16] = "0123456789ABCDEF";
    int dec = 1;
    int result = 0;

    nb = nb_neg(nb);
    while ((nb / dec) >= 16) {
        dec = dec * 16;
    }
    while (dec > 0) {
        result = (nb / dec) % 16;
        my_putchar(hexa[result]);
        dec = dec / 16;
    }
    return (nb);
}
