/*
** EPITECH PROJECT, 2021
** is_neg
** File description:
** return neg or not
*/

#include "my.h"

int nb_neg(int neg)
{
    if (neg < 0) {
        my_putchar('-');
        return (neg * -1);
    } else {
        return (neg);
    }
}
