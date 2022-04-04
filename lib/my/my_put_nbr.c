/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** display a number
*/

#include "my.h"

int my_put_nbr(int nb)
{
    nb = nb_neg(nb);
    int n = nb;
    int count = 1;

    while (n >= 9) {
        n = n / 10;
        count = count * 10;
    }
    while (nb >= 10) {
        my_putchar((nb / count) + 48);
        nb = nb % count;
        count = count / 10;
    }
    my_putchar(nb + 48);
    return (0);
}
