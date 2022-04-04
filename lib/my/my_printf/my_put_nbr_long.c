/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** display a number
*/

#include "my.h"

void my_put_nbr_long(long nb)
{
    long n = nb;
    long count = 1;

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
}

void my_uns_put_nbr_long(unsigned long nb)
{
    unsigned long n = nb;
    unsigned long count = 1;

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
}
