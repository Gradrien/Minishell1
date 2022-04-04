/*
** EPITECH PROJECT, 2021
** convert_bin
** File description:
** convert nb into a binary nb
*/

#include "my.h"

int my_convert_bin(int nb)
{
    char binary[2] = "01";
    int dec = 1;
    int result = 0;

    nb = nb_neg(nb);
    while ((nb / dec) >= 2) {
        dec = dec * 2;
    }
    while (dec > 0) {
        result = (nb / dec) % 2;
        my_putchar(binary[result]);
        dec = dec / 2;
    }
    return (nb);
}
