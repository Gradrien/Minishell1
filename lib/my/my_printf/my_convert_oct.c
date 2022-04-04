/*
** EPITECH PROJECT, 2021
** convert_oct
** File description:
** convert nb into an octal nb
*/

#include "my.h"

int my_convert_oct(int nb)
{
    char oct[8] = "01234567";
    int dec = 1;
    int result = 0;

    nb = nb_neg(nb);
    while ((nb / dec) >= 8) {
        dec = dec * 8;
    }
    if (dec == 1) {
        my_put_nbr(0);
        my_put_nbr(0);
    }
    if (dec == 8)
        my_put_nbr(0);
    while (dec > 0) {
        result = (nb / dec) % 8;
        my_putchar(oct[result]);
        dec = dec / 8;
    }
    return (nb);
}
