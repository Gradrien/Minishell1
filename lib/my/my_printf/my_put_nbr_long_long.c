/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** display a number
*/

#include "my.h"

void my_put_nbr_long_long(long long nb)
{
    long long n = nb;
    long long count = 1;

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

void my_uns_put_nbr_long_long(unsigned long long nb)
{
    unsigned long long n = nb;
    unsigned long long count = 1;

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
